/*
 * Empty C++ Application
 */
//g++ demo0.cpp -o demo -lopencv_core -lopencv_highgui -lopencv_imgproc

 
#include "opencv2/opencv.hpp"
#include <iostream>
#include <stdio.h>


using namespace cv;
using namespace std;

int main(int, char**)
{
    cout << " video demo V1.1 built with Poky/BitBake " << endl;
    VideoCapture *cap=new VideoCapture(0); // open the default camera
    
    if(!(cap->isOpened()))  // check if we succeeded
        return -1;
    

    Mat edges;
    Mat frame;
    namedWindow("edges",1);


    for(;;)
    {
        (*cap) >> frame; // get a new frame from camera
	imshow("frames", frame);
        cvtColor(frame, edges, CV_BGR2GRAY);
        GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
        Canny(edges, edges, 0, 30, 3);
        imshow("edges", edges);
        if(waitKey(30) >= 0) break;
    }
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}
