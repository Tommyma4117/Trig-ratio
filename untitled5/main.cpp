#include <math.h>
#include <iostream>

#define PI 3.14159265

int main(){
    float a, b, c, d, e, f, g, h, i, j, k;
    a = 30.0;
    b = 60.0;
    c = 90.0;
    d = cos(a * PI / 180);  //cos 30
    e = sin(a * PI / 180);  //sin 30
    f = tan(a * PI / 180);  //tan 30
    g = cos(b * PI / 180);  //cos 60
    h = sin(b * PI / 180);  //sin 60
    i = tan(b * PI / 180);  //tan 60
    k = sin(c * PI / 180);  //sin 90
    int l, m;
    l = 90;
    m = cos(l * PI / 180);  //cos 90


    std::cout << "cos 30=" << d << std::endl;
    std::cout << "sin 30=" << e << std::endl;
    std::cout << "tan 30=" << f << std::endl;
    std::cout << "cos 60=" << g << std::endl;
    std::cout << "sin 60=" << h << std::endl;
    std::cout << "tan 60=" << i << std::endl;
    std::cout << "cos 90=" << m << std::endl;
    std::cout << "sin 90=" << k << std::endl;


    return 0;

}