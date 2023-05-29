
#include <iostream>
#include "rectangleType.h"
using namespace std;

int main()
{
    rectangleType myRect(5, 5), yourRect(5,5);
    rectangleType newRect = myRect * yourRect;
    cout << "the length of newRect: " << newRect.getLength() << endl;
    cout << "the width of newRect: " << newRect.getWidth() << endl;
    if (myRect == yourRect)
        cout << "They are equal!" << endl;
    else
        cout << "They are not equal." << endl;
    
    

}