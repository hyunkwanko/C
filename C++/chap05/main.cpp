#include <iostream>
using namespace std;

//int main(){
//    int ary[5] = { 1,2,3,4,5 };
//    for (int i = 0; i < 5; i++)
//        cout << "ary[" << i << "] = " << ary[i] << endl;
//
//    return 0;
//}

//class CPoint {
//private:
//    int x, y;
//
//public:
//    void SetXY(int a, int b) { x = a; y = b; }
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(){
//    CPoint pt[5];
//    int i;
//
//    for (i = 0; i < 5; i++)
//        pt[i].SetXY(i, i);
//
//    for (i = 0; i < 5; i++)
//        pt[i].Print();
//
//    return 0;
//}

//class CPoint {
//private:
//    int x, y;
//
//public:
//    CPoint (int a, int b) : x(a), y(b) {}
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(){
//    CPoint pt[5] = { CPoint(0, 0), CPoint(1, 1), CPoint(2, 2),
//                     CPoint(3, 3), CPoint(4, 4) };
//
//    for (int i = 0; i < 5; i++)
//        pt[i].Print();
//
//    return 0;
//}

//class CPoint {
//private:
//    int x, y;
//
//public:
//    CPoint (int a, int b) : x(a), y(b) {}
//    void Print() { cout << "(" << x << ", " << y << ")"; }
//};
//
//int main(){
//    CPoint pt[3][2] = { { CPoint(0, 0), CPoint(0, 1) },
//                        { CPoint(1, 0), CPoint(1, 1) },
//                        { CPoint(2, 0), CPoint(2, 1) } };
//
//    for (int i = 0; i < 3; i++){
//        for (int j = 0; j < 2; j++){
//            pt[i][j].Print();
//            cout << "\t";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//int main(){
//    int *ptr;
//    int i;
//
//    ptr = new int(4);
//    cout << *ptr << endl;
//    delete ptr;
//
//    ptr = new int[5];
//    for (i = 0; i < 5; i++)
//        ptr[i] = i;
//
//    for (i = 0; i < 5; i++)
//        cout << ptr[i] << " ";
//    delete [] ptr; // 배열
//
//    return 0;
//}

//class CPoint {
//private:
//    int x, y;
//
//public:
//    CPoint() : x(0), y(0) {}
//    CPoint(int a) : x(a), y(a) {}
//    CPoint(int a, int b) : x(a), y(b) {}
//    void Print() { cout << "(" << x << ", " << y << ") "; }
//};
//
//int main(){
//    CPoint *ptr;
//
//    ptr = new CPoint;
//    ptr->Print();
//    delete ptr;
//
//    ptr = new CPoint();
//    ptr->Print();
//    delete ptr;
//
//    ptr = new CPoint(1);
//    ptr->Print();
//    delete ptr;
//
//    ptr = new CPoint(2, 3);
//    ptr->Print();
//    delete ptr;
//
//    return 0;
//}

//class CPoint {
//private:
//    int x, y;
//
//public:
//    CPoint(int a, int b) : x(a), y(b) {}
//    void Move(int a, int b) { x += a; y += b; }
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(){
//    CPoint P1(1, 2);
//    CPoint P2(3, 4);
//
//    P1.Move(1, 1);
//    P2.Move(2, 2);
//
//    P1.Print();
//    P2.Print();
//
//    return 0;
//}

//struct CPoint {
//    int x, y;
//};
//
//void Move(CPoint *This, int a, int b){
//    This->x += a;
//    This->y += b;
//}
//
//void Print(CPoint *This){
//    cout << "(" << This->x << ", " << This->y << ")" << endl;
//}
//
//int main(){
//    CPoint P1 = { 1, 2 };
//    CPoint P2 = { 3, 4 };
//
//    Move(&P1, 1, 1);
//    Move(&P2, 2, 2);
//
//    Print(&P1);
//    Print(&P2);
//
//    return 0;
//}

class CPoint{
private:
    int x;
    int y;

public:
    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
    friend void Center(CPoint P1, CPoint P2);
};

void Center(CPoint P1, CPoint P2){
    CPoint P;
    P.x = (P1.x + P2.x) / 2;
    P.y = (P1.y + P2.y) / 2;
    cout << "중심 : " << "(" << P.x << ", " << P.y << ")" << endl;
}

int main(){
    CPoint P1(1, 2), P2(5, 6);
    Center(P1, P2);

    return 0;
}



































