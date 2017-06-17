#include <iostream>
#include <opencv2/opencv.hpp>

int main(void)
{
  cv::VideoCapture cap(0);
  cap.set(cv::CAP_PROP_FRAME_WIDTH, 3280);
  cap.set(cv::CAP_PROP_FRAME_HEIGHT, 2464);
  cv::Mat img;
  cap >> img;
  if (img.empty())
  {
    std::cerr << "Failed reading camera ...\n";
  }
  else
  {
    cv::imwrite("test.jpg", img);
  }
  return 0;
}
