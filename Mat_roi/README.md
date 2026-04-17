## 부분 행렬 추출
- 주로 사용되는 Mat 클래스 괄호 연산자 재정의 함수 원형은 다음과 같다.

<br/>

<img width="553" height="238" alt="image" src="https://github.com/user-attachments/assets/3db9812c-70db-4772-8952-e899c0da9f50" />

<br/>

```
Mat img1 = imread("cat.bmp");
Mat img2 = img1(Rect(220, 120, 340, 240));
```

<br/>

<img width="533" height="278" alt="image" src="https://github.com/user-attachments/assets/5284a61b-00fe-4fe4-b999-cf00dd1b959d" />

<br/>

- 부분 영상을 추출할 때의 주의할 점은 Mat 클래스의 괄호 연산자를 이용하여 얻은 부분 영상이 독립된 메모리 공간을 확보하여 복사하는 깊은 복사가 아니라 얕은 복사 형식이라는 점이다.
- 그렇기 때문에 부분 영상을 추출한 후 부분 영상의 픽셀 값을 변경하면 추출한 부분 영상뿐 아니라 원본 영상의 픽셀 값도 함께 변경된다.

<br/>

<br/>

- 3채널 컬러 영상의 경우에는 각각의 성분에 대해 반전을 수행한다.
- 영상의 반전은 Mat 클래스 타입의 변수 앞에 ~ 연산자를 붙이는 방식으로 쉽게 적용할 수 있다.

<br/>

```
img2 = ~img2;
```

<br/>

<img width="613" height="325" alt="image" src="https://github.com/user-attachments/assets/221995fd-267a-45ae-8f35-5695297883e6" />







