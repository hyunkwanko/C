#include <iostream>
using namespace std;

//class CPoint {
//private:
//    int x, y;
//
//public:
//    CPoint(int a) : x(a), y(a) {}
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(){
//    CPoint P1(3);
//    CPoint P2 = CPoint(4);
//    CPoint P3 = 5;
//
//    P1.Print();
//    P2.Print();
//    P3.Print();
//
//    return 0;
//}

//class CPoint {
//private:
//    int x, y;
//
//public:
//    CPoint(int a) : x(a), y(a) {}
//    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
//};
//
//int main(){
//    CPoint P1(3);
//    CPoint P2(4);
//    CPoint P3 = P2;
//    CPoint P4(P2);
//
//    P1 = P2;
//
//    P1.Print();
//    P2.Print();
//    P3.Print();
//    P4.Print();
//
//    return 0;
//}

//class CString {
//private:
//    int len;
//    char *str;
//
//public:
//    /*
//     모든 객체의 *str이 동일한 메모리 주소를 가리킨다. 소멸자가 수행될 때 동일한 주소에 대한
//     delete 시도로 인해 에러가 발생한다.
//    */
//    CString(char * s = "Unknown"){
//        len = strlen(s);
//        str = new char[len + 1];
//        strcpy(str, s);
//    }
////    ~CString() { delete [] str; }
//    void Print() { cout << str << endl; }
//};
//
//int main(){
//    CString str1 = "C++ Programming";
//    CString str2 = str1;
//    CString str3;
//
//    str3 = str1;
//
//    str1.Print();
//    str2.Print();
//    str3.Print();
//
//    return 0;
//}

//class CString {
//private:
//    int len;
//    char *str;
//
//public:
//    CString(const CString &string){ // 복사 생성자 -> 참조에 의한 전달
//        len = string.len;
//        str = new char[len + 1];
//        strcpy(str, string.str);
//    }
//    CString(char *s = "Unknown"){
//        len = strlen(s);
//        str = new char[len + 1];
//        strcpy(str, s);
//    }
//    ~CString() { delete [] str; }
//    void Print() { cout << str << endl; }
//};
//
//void ShowString(CString str){
//    str.Print();
//}
//
//int main(){
//    CString str1 = "C++ Programming";
//    CString str2 = str1;
//
//    str1.Print();
//    ShowString(str2);
//
//    return 0;
//}

class CString {
private:
    int len;
    char *str;

public:
    CString(const CString &string){
        len = string.len;
        str = new char[len + 1];
        strcpy(str, string.str);
    }
    CString(char *s = "Unknown"){ // 객체 반환에 따른 복사 생성
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }
    ~CString() { delete [] str; }
    void Print() { cout << str << endl; }
};

CString GetString(){
    CString str("Current String");
    return str;
}

int main(){
    CString str1 = GetString();

    str1.Print();

    return 0;
}



























