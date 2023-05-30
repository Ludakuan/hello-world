// opencv47_test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp> //opencv的命名空间
#include <opencv2/core/utils/logger.hpp>

using namespace cv;
using namespace std;

int main()
{
	std::cout << "Hello World!\n";
	utils::logging::setLogLevel(utils::logging::LOG_LEVEL_ERROR);
	/*Mat img = imread("C:\\Users\\Administrator\\Desktop\\11483235364_1200x800.jpg");
	imshow("测试", img);
	waitKey();*/

	Mat img; //声明一个保存图像的类
	img = imread("C:\\Users\\Administrator\\Desktop\\11483235364_1200x800.jpg"); //读取图像，根据图片所在位置填写路径即可
	if (img.empty()) //判断文件是否存在
	{
		cout << "请确认图像文件是否正确" << endl;
		return -1;
	}
	namedWindow("opencv4.7.0-test", WindowFlags::WINDOW_AUTOSIZE);
	imshow("opencv4.7.0-test", img); //显示图像
	waitKey();
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
