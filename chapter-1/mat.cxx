#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
    const cv::Size size(240, 320);
    const int pixel_value = 100;
    cv::Mat first_image(size, CV_8U, pixel_value);
    const std::string window_name { "Image" };
    cv::imshow(window_name, first_image);
    cv::waitKey(0);
    const cv::Size new_size(200, 200);
    first_image.create(new_size, CV_8U);
    const int new_pixel_value = 200;
    first_image = new_pixel_value;
    cv::imshow(window_name, first_image);
    cv::waitKey(0);
    return 0;
}
