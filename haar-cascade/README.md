## haar_cascade
### Overview
OpenCV의 Haar Casade Classifier를 사용하여 정지 이미지에서 얼굴과 눈을 단계적으로 탐지한다. 얼굴 영역을 먼저 검출한 뒤, 해당 영역 내부에서 눈을 추가로 검출한다. 

### Key Idea
Haar Cascade는 사전에 학습된 특징 기반 분류기를 사용해 이미지 내 객체 위치를 빠르게 탐색한다. 얼굴을 먼저 검출하고 관심 영역(ROI) 안에서 눈을 탐지하면 탐색 범위를 줄여 정확도와 효율을 동시에 확보할 수 있다. 

### Detection Pipeline
Input: BGR 컬러 이미지
- BGR -> Grayscale
- Face Detection(Haar Cascade)
- Face ROI 내 Eye Detection (Haar Cascade)
- 검출 결과 시각화 (Bounding Box)

### Implmentation Details
- Face Cascade: haarcascade_frontalface_default.xml
- Eye Cascade: haarcascade_eye.xml
- Detection: detectMultiScale
- 시각화: cv2.rectangle, cv2.imshow

### Result
이미지에서 얼굴 영역이 파란색 박스로 검출되고, 각 얼굴 내부에서 눈이 초록색 박스로 추가 검출된다. 계층적 탐지를 통해 불필요한 오탐지를 줄인다.

<img width="1195" height="802" alt="image" src="https://github.com/user-attachments/assets/bfa4b6a5-6b14-441a-9631-2e3ef4e07ca4" />

