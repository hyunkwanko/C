#include <iostream>
using namespace std;

/* 예제 1 */
//template <typename T>
//T Sum(T a, T b){
//    T c = a + b;
//    return c;
//}
//
//int main(){
//    cout << Sum(1, 2) << endl;
//    cout << Sum(1.1, 2.2) << endl;
//    cout << Sum('1', '2') << endl;
//
//    return 0;
//}

/* 예제 2 */
//template <typename T>
//class CPoint {
//private:
//    T x, y;
//public :
//    CPoint(T a, T b) : x(a), y(b) { }
//    void Move(T a, T b);
//    void Print(){cout<<"("<<x<<","<<y<<")"<<endl;}
//};
//
//template <typename T>
//void CPoint<T>::Move(T a, T b) {
//    x += a;
//    y += b;
//}
//
//int main(void) {
//    CPoint<int> P1(1, 2);
//    CPoint<double> P2(1.1, 2.2);
//    P1.Print();
//    P2.Print();
//    return 0;
//}

/* 에제 3 */
//template <typename T>
//class CPoint {
//private :
//    T x, y;
//public :
//    CPoint(T a = 0, T b = 0) : x(a), y(b) {}
//    template <typename U>
//    friend ostream &operator<<(ostream &out, CPoint<U> &Po);
//};
//
//template <typename T> // << 연산자 오버로딩도 템플릿으로 구현
//ostream &operator<<(ostream &out, CPoint<T> &Po) {
//    out << "(" << Po.x << "," << Po.y << ")";
//    return out;
//}
//
//template <typename T>
//class CArray {
//private :
//    T ary[5];
//public :
//    CArray(T a) {
//        for (int i = 0; i < 5; i++) {
//            ary[i] = a;
//        }
//    }
//    void Print() {
//        for (int i = 0; i < 5; i++) {
//            cout << ary[i] << " "; // CPoint 객체를 원소로 갖는 배열 -> 연산자 오버로딩 필요
//        }
//        cout << endl;
//    };
//};
//
//
//int main() {
//    CArray<int> Ary1(5);
//    CArray<CPoint<int>> Ary2(CPoint<int>(1, 2));
//
//    Ary1.Print();
//    Ary2.Print();
//    return 0;
//}


/* 10장 - 13 */
template <typename T, int Radius>
class CPoint {
private :
    T x, y;
public :
    CPoint(T a = 0, T b = 0) : x(a), y(b) {}
    void Print(){
        cout << "(" << x << "," << y << ")" << endl;
        cout << "반지름 : " << Radius << endl;
    }
};

int main(void) {
    CPoint<int, 15> P1(3, 4);
    P1.Print();
    return 0;
}

//template <typename T>
//class CPoint {
//private:
//    T x, y;
//public:
//    CPoint(T a, T b) : x(a), y(b) {}
//    void Move(T a, T b);
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//template <typename T>
//void CPoint<T>::Move(T a, T b) {
//    x += a;
//    y += b;
//}
//int main(){
//    CPoint<int>P1(1, 2);
//    CPoint<double>P2(1.1, 2.2);
//
//    P1.Print();
//    P2.Print();
//
//    return 0;
//}

//template  <typename T = int> // 디폴트 템플릿 매개변수
//class CPoint {
//private:
//    T x, y;
//public:
//    CPoint(T a = 0, T b = 0) : x(a), y(b) {}
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(){
//    CPoint<>P1(1, 2); // CPoint<int> P1(1, 2)와 동일
//    P1.Print();
//
//    return 0;
//}








