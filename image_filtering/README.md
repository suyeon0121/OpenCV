## Image filtering
### Overview
OpenCV를 사용해 입력 이미지를 그레이스케일 변환, 블러링, 에지 검출 단계로 처리하고 각 처리 결과를 하나의 화면에 시각화한다. 

### Key Idea
이미지 처리의 기본적인 전처리 단계들은 각각 다른 목적을 가진다.
- Grayscale: 색상 정보를 제거하고 구조에 집중
- Gaussian Blur: 노이즈 완화
- Canny Edge: 경계 정보 추출
각 처리 결과를 동시에 비교함으로써 전처리 단계별 효과를 직관적으로 확인한다.

### Processing Pipeline
Input: BGR 컬러 이미지
- BGR -> Grayscale
- Grayscale -> Gaussian Blur
- Grayscale -> Canny Edge Detection
각 결과를 BGR 형태로 변환 후 하나의 이미지로 결합한다.

### Implementation Details
- Grayscale: cv2.cvtColor
- Blur: cv2.GaussianBlur (5x5)
- Edge Detection: cv2.Canny (100, 200)
- 시각화: np.hstack, np.vstack, cv2.imshow

### Result
하나의 이미지에서 원본, 그레이스케일, 블러, 에지 검출 결과를 동시에 확인할 수 있다. 각 전처리 단계가 이미지 구조에 미치는 영향을 명확히 비교할 수 있다. 
