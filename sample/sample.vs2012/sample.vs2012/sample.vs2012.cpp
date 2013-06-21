// sample.vs2012.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

#include <opencv2\opencv.hpp>

int _tmain(int argc, _TCHAR* argv[])
{
    auto capture = ::cvCreateCameraCapture( CV_CAP_ANY );

    while ( 1 ) {
        auto frame = ::cvQueryFrame( capture );
        ::cvShowImage( "Camera Capture", frame );

        int key = cv::waitKey( 10 );
        if ( key > 0 ) {
            break;
        }
    }

    return 0;
}

