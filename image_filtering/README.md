# Image Filtering Project

1. 이미지 필터링 
이미지에서 노이즈 제거, 특징 강조, 후속 처리(에지 검출 등) 용이
Gaussian Blur
  - 이미지의 픽셀 값을 주변 픽셀과 가중 평균하여 부드럽게 처리
  - 노이즈 제거, 에지 검출 시 불필요한 세부 잡음 감소

  blur = cv2.GaussianBlur(gray, (5, 5), 0)
  - (5, 5): 필터 커널 크기
  - 0: 표준편차, 자동 계산

2. Canny 에지 검출
이미지에서 경계를 검출하여 객체 윤곽 강조
  1. 노이즈 제거: Gaussian Blur 사용
  2. 그래디언트 계산: 픽셀 밝기 변화량 계산
  3. Non-maximum suppression: 얇은 에지로 정리
  4. 이중 임계값: 강한/약한 에지 결정
  5. Edge Tracking: 약한 에지를 강한 에지에 연결

  canny = cv2.Canny(gray, 100, 200)
  - 100: 하한 임계값 -> 약한 에지 기준
  - 200: 상한 임계값 -> 강한 에지 기준

<img width="1227" height="847" alt="image" src="https://github.com/user-attachments/assets/1fb9368f-dd98-4b27-9927-1ed839a2ee12" />
