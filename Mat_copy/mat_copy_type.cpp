#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

void MatOp2()
{
	Mat img1 = imread("dog.bmp");	// dog.bmp 강아지 영상을 불러와서 img1에 저장 

	// 복사 생성자와 대입 연산자를 이용하여 img1의 복사본 영상 img2, img3을 생성. (얕은 복사)
	Mat img2 = img1;
	Mat img3;
	img3 = img1;

	// Mat::clone()과 Mat::copyTo() 함수를 이용하여 img1의 복사본 영상 img4, img5를 생성. (깊은 복사)
	Mat img4 = img1.clone();
	Mat img5;
	img1.copyTo(img5);

	img1.setTo(Scalar(0, 255, 255));		// yellow

	// img1 ~ img5 영상을 모두 새 창으로 출력 
	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);
	imshow("img4", img4);
	imshow("img5", img5);

	waitKey();				// 프로그램을 일시 정지시키고 사용자의 키보드 입력을 기다리는 함수
	destroyAllWindows();		// 현재 프로그램에 의해 열려 있는 모든 윈도우 창을 한꺼번에 닫는 함수
}

int main()
{
	MatOp2();
	return 0;
}