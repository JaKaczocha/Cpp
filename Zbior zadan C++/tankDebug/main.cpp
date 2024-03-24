#include <iostream>

using namespace std;


float myAbs(float a) {
    return a > 0.0 ? a : -a;
}

int main()
{
    float Xval = -1.0, Yval = -1.0;
    float left = Xval, right = Yval;
    std::cout << "abs(Yval): " << myAbs(Yval) << " abs(Xval): " << myAbs(Xval) << "\n";
    if(myAbs(Yval) <= 0.2 && myAbs(Xval) <= 0.2 ) { //w miejscu
        right = 0;
        left = 0;

    }
    else if(Yval >= 0.2) { //do przodu

        if(Xval <= -0.2) { //troche w lewo
            right = 1.0;
            //OLED_Puts(0, 0, "//lewo i do przodu");

        }
        else if( Xval >= 0.2) {//troche w prawo
            left = 1.0;
            //OLED_Puts(0, 0, "//prawo  i do przodu");

        }
        else { //prosto że prosto
            left = 1.0;
            right = 1.0;
            //OLED_Puts(0, 0, "//prosto że prosto     ");

        }

    }
    else if(Yval <= -0.2) { //do tyłu
        if(Xval <= -0.2) { //troche w lewo

            right = -1.0;
            left = -1.0 + 2*Yval;
            //OLED_Puts(0, 0, "//lewy tył        ");

        }
        else if( Xval >= 0.2) {//troche w prawo

            left  = -1.0;
            //OLED_Puts(0, 0, "//prawy tył        ");

        }
        else { //prosto że do tyłu
            left = -1.0;
            right = -1.0;
            //OLED_Puts(0, 0, "//prosto ze do tyłu       ");

        }

    }
    else if(Xval > 0.2) {

        //OLED_Puts(0, 0, "//prawo       >>>>>>>>>>");
        left = 1.0;
        right = -1.0;

    }
    else if(Xval < -0.2f) {

        //OLED_Puts(0, 0, "//lewo       <<<<<<<<<<<");

        left = -1.0;
        right = 1.0;

    }



    //some calculations;




    std::cout << "left: " << left << " right: " << right;

    return 0;
}
