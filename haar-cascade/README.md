# haar_cascade
Haar Cascade Classifier는 OpenCV에서 제공하는 고전적인 객체 탐지 알고리즘이다. 
얼굴, 눈, 입, 자동차 번호판 등 사전에 학습된 모델(XML 파일)을 이용해 객체를 찾는다. 
영상의 여러 크기를 스캔하면서 특징(밝기 대비 패턴, 사각형 모양 필터)을 추출해 객체 여부를 판별한다. 

faces = face_cascade.detectMultiScale(
    gray, 
    scaleFactor=1.1, 
    minNeighbors=5
)

- scaleFactor: 이미지 크기를 줄여가며 탐지할 비율 (1.1 -> 10%씩 축소하며 탐색)
  --> 작을수록 정밀하지만 속도는 느림

- minNeighbors: 얼굴이라고 판단하기 위해 겹쳐야 하는 사각형 수
  - 값이 크면 -> 정확도 높음, 검출 수 낮음(엄격).
  - 값이 작으면 -> 정확도 낮음, 검출 수 높음(느슨).

- 반환값: 여러 객체 좌표 -> (x, y, w, h) 리스트.


<img width="1195" height="802" alt="image" src="https://github.com/user-attachments/assets/bfa4b6a5-6b14-441a-9631-2e3ef4e07ca4" />

