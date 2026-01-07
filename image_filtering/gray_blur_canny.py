import cv2
import numpy as np

image = cv2.imread(r"C:\P\Image filtering\food.jpg")

gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# 블러 처기 (가우시안 블러 적용, 커널 크기 5x5, 표준편차 0)
#   - 노이즈 제거 효과, 에지 검출을 더 깔끔하게 하기 위함 
blur = cv2.GaussianBlur(gray, (5, 5), 0)

# Canny 에지 검출 (흑백 이미지를 사용, 임계값 100~200)
canny = cv2.Canny(gray, 100, 200)

gray_bgr = cv2.cvtColor(gray, cv2.COLOR_GRAY2BGR)
blur_bgr = cv2.cvtColor(blur, cv2.COLOR_GRAY2BGR)
canny_bgr = cv2.cvtColor(canny, cv2.COLOR_GRAY2BGR)

top = np.hstack([image, gray_bgr])
bottom = np.hstack([blur_bgr, canny_bgr])
combined = np.vstack([top, bottom])

scale = 0.6
resized = cv2.resize(combined, None, fx=scale, fy=scale)

cv2.imshow("Original | Gray | Blur | canny", resized)
cv2.waitKey(0)
cv2.destroyAllWindows()
