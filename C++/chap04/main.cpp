#include <iostream>
using namespace std;

//class Car{
//public:
//    int m_motor;
//    int m_CC;
//    int m_speed;
//};
//
//int main(){
//    Car c1;
//    int *p = (int *)malloc(sizeof(int) * 3);
//    c1.m_speed=100;
//    cout << p;
//    free(p);
//    return 0;
//}

//class Car{
//private:
//    int m_color;
//    int m_CC;
//    int m_speed;
//
//public:
//    void Accelerate(){
//        m_speed++;
//    }
//    void Stop(){}
//    void TurnOn(){}
//};
//
//int main(){
//    Car MyCar1, MyCar2;
//    // MyCar1.m_speed = 0;
//    MyCar1.Accelerate();
//
//    return 0;
//}

//class CPoint {
//private:
//    int x;
//    int y;
//
//public:
//    CPoint(int a, int b = 0) { x = a; y = b; } // 생성자
////    CPoint(int a) { x = a; y = 0; }
//    void Print(){ cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(){
//    CPoint P1(3, 10); // b값이 Default값으로 0이 있지만 지정값이 있다면 지정값을 생성
//    CPoint P2(5);
//    CPoint P3 = 6;
//
//    P1.Print();
//    P2.Print();
//    P3.Print();
//
//    return 0;
//}

//class CPoint{
//    int x, y;
//public:
//    CPoint(int a, int b) { x = a; y = b; }
//    CPoint() { x = 0; y = 0; }
//    void Print(){ cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(){
//    CPoint P1(3, 4);
//    CPoint P2;
//    P1.Print();
//    P2.Print();
//    return 0;
//}

//class CArray{
//private:
//    int count;
//    int *x;
//
//public:
//    CArray(int a){ count = a; x = new int[count]; }
//    ~CArray(){ delete [] x; }
//    void Print(){
//        for (int i = 0; i < count; i++)
//            cout << x[i] << endl;
//    }
//};
//
//int main(){
//    CArray ary(5);
//    ary.Print();
//
//    return 0;
//}

//class CPoint {
//private:
//    int x;
//    int y;
//
//public:
//    CPoint(int a, int b) {
//        x = a;
//        y = b;
//        cout << "생성자 : ";
//        Print();
//    }
//    ~CPoint() { cout << "소멸자 : ";
//        Print();
//    }
//    void Print(){
//        cout << "(" << x << ", " << y << ")" << endl;
//    }
//};
//
//CPoint P1(1, 1);
//CPoint P2(2, 2);
//
//int main(){
//    CPoint P3(3, 3);
//    CPoint P4(4, 4);
//
//    return 0;
//}

//class CPoint{
//private:
//    int x, y;
//public:
//    CPoint() { x = 0; y = 3; }
//    ~CPoint(){};
//    void SetXY(int a, int b) { x = a; y = b; }
//    void Print() { cout << "(" << x << ", " << y << ")"; }
//};
//
//int main(){
//    CPoint P1;
//    P1.SetXY(3, 4);
//    P1.Print();
//
//    return 0;
//}

//class CPoint {
//private:
//    int x;
//    int y;
//
//public:
//    CPoint(int a, int b) : x(a), y(b) {}
//    void Print(){
//        cout << "(" << x << ", " << y << ")" << endl;
//    }
//};
//
//int main(){
//    CPoint P1(3, 4);
//    P1.Print();
//
//    return 0;
//}

//class CPoint {
//private:
//    int x;
//    int y;
//
//public:
//    CPoint(int a, int b);
//    void Move(int a, int b);
//    void Print();
//};
//
//CPoint::CPoint(int a, int b) : x(a), y(b) {} // 외부 정의
//
//void CPoint::Move(int a, int b) {
//    x += a;
//    y += b;
//}
//
//void CPoint::Print(){
//    cout << "(" << x << ", " << y << ")" << endl;
//}
//
//int main(){
//    CPoint P1(3, 4);
//    P1.Move(5, 6);
//    P1.Print();
//
//    return 0;
//}




























