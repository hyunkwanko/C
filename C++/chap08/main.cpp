#include <iostream>
using namespace std;
#define PI 3.14

// base와 derived 클래스의 관계는 상대적인 개념!

/* 예제 1 */
//class CCricle {
//public:
//    int x, y;
//    double Radius;
//public:
//    double GetArea() { return (PI * Radius * Radius); }
//};
//
//class CSphere : public CCricle { // CCircle로부터 상속
//public:
//    int z;
//public:
//    double GetVolume() {
//        return ((4.0/3.0) * PI * Radius * Radius * Radius);
//    }
//};
//
//int main(){
//    CSphere Sph; // Sph: x, y, Radius 상속
//    Sph.x = 1;
//    Sph.y = 1;
//    Sph.z = 1;
//    Sph.Radius = 5;
//
//    cout << "구의 표면적 : " << Sph.GetArea() << endl; // Sph:GetArea 상속
//    cout << "구의 부피 : " << Sph.GetVolume() << endl;
//    return 0;
//}

/* 예제 2 */
//class CCircle {
//protected: // 외부 접근 허용하지 않음 -> private과 동일, derived 클래스에서의 접근 허용 -> public과 동
//    int x, y; double Radius;
//public :
//    CCircle(int a, int b, double r) : x(a), y(b), Radius(r) { }
//    double GetArea() { return (PI * Radius * Radius); }
//};
//
//class CSphere : public CCircle {
//private :
//    int z;
//public :
//    CSphere(int a, int b, int c, double r) : CCircle(a, b, r), z(c) { }
//    double GetVolume() { return ((4.0/3.0) * PI * Radius * Radius * Radius); }
//};
//
//int main(void) {
//    CSphere Sph(1, 2, 3, 4);
//    cout << Sph.GetVolume() << endl;
//    return 0;
//}

/* 예제 3 */
class CCircle {
protected :
    int x, y; double Radius;
public :
    CCircle(int a, int b, double r) : x(a), y(b), Radius(r) { }
    double GetArea() { return (PI * Radius * Radius); }
};

class CSphere : public CCircle {// derived가 class이므로 디폴트로 private 상속
private :
    int z;
public :
    CSphere(int a, int b, int c, double r) : CCircle(a, b, r), z(c) { }
//    double GetArea() { return (4 * PI * Radius * Radius); } // 함수 재정
    double GetArea() { return (4 * CCircle::GetArea()); } // 함수 재정의
    double GetVolume() { return ((4.0/3.0) * PI * Radius * Radius * Radius); }
};

int main(void) {
    CSphere Sph(1, 1, 1, 1);
    cout << Sph.GetArea() << endl;
    cout << Sph.GetVolume() << endl;
    return 0;
}