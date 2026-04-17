## 행렬의 복사
- Mat 클래스 객체에 저장된 영상 또는 행렬을 복사하는 가장 간단한 방법은 복사 생성자 또는 대입 연산자를 사용하는 것이다.

<br/>

```
Mat img2 = img1;    // 복사 생성자(얕은 복사)
```

<br/>

```
Mat img3;
img3 = img1;        //대입연산자(얕은복사
```

<br/>

- 만약 복사본 영상을 새로 생성할 때, 픽셀 데이터를 공유하는 것이 아니라 메모리 공간을 새로 할당하여 픽셀 데이터를 전체 복사하고 싶다면
- Mat::clone() 또는 Mat::copyTo() 함수를 사용해야 한다.

<img width="558" height="296" alt="image" src="https://github.com/user-attachments/assets/6911b416-309d-4a09-8122-897329ad72e3" />

### 결과 

<img width="825" height="546" alt="image" src="https://github.com/user-attachments/assets/bb76e91a-80bc-4561-92a4-9166a29f2284" />


