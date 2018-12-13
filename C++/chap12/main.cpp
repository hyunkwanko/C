#include <iostream>
#include <fstream>
using namespace std;

/* 예제 1 */
//int main(){
//    ofstream fout("out.txt");
//
//    if(!fout){
//        cout << "파일 열기 에러" << endl;
//        return 1;
//    }
//
//    for (int i = 1; i <= 20; i++){
//        if (i % 3 == 0)
//            fout << i << " ";
//    }
//
//    fout.close();
//
//    return 0;
//}

/* 예제 2 */
//int main(){
//    int Num;
//    int Sum = 0;
//    ifstream fin("out.txt");
//
//    if (!fin){
//        cout << "파일 열기 에러 " << endl;
//
//        return 1;
//    }
//
//    fin >> Num;
//
//    while (!fin.eof()) {
//        Sum += Num;
//        fin >> Num;
//    }
//
//    cout << "합계 : " << Sum << endl;
//
//    fin.close();
//    return 0;
//}

/* 예제 3 */
//int main(){
//    ofstream fout("out3.txt", ios_base::out | ios_base::trunc | ios_base::binary);
//    fout << 'a' << endl << 'b' << endl << 'c' << endl;
//
//    fout.close();
//
//    return 0;
//}


/* 예제 4 */
//int main(void) { // get, put 함수를 이용한 파일 복사
//    ifstream fin("in4.txt");
//    ofstream fout("out4.txt");
//    if (!fin || !fout) {
//        cout << "파일 열기 에러" << endl; return 1;
//    }
//
//    char ch = fin.get(); // 한 글자씩 받고 커맨드는 넘어간다.
//
//    while (!fin.eof()) {
////        cout << ch;
//        fout.put(ch);
//        fin.get(ch);
//    }
//
//    fin.close();
//    fout.close();
//    return 0;
//}


/* 12장 - 17 */
//struct Point {
//    int x, y;
//};
//
//int main(void) {
//    Point Po = { 1, 1 };
//
//    fstream fio("ex7.dat", ios_base::in | ios_base::out | ios_base::trunc | ios_base::binary);
//
//    for(int i = 0; i < 5; i++)
//        fio.write((char *) &Po, sizeof(Point));
//
//    fio.seekp(3 * sizeof(Point), ios_base::beg);
//    Po.x = 2;
//    Po.y = 2;
//    fio.write((char *) &Po, sizeof(Point));
//    fio.seekg(0, ios_base::beg);
//
//    while (fio.read((char *) &Po, sizeof(Point))) {
//        cout<<"("<<Po.x<<","<<Po.y<<")"<<endl;
//    }
//
//    fio.close();
//    return 0;
//
//}



//#include <cstring>
//using namespace std;
//
//class CString {
//private :
//    int len;
//    char *str;
//public :
//    CString(char *s = "Unknown") {
//        len = strlen(s);
//        str = new char[len + 1];
//        strcpy(str, s);
//    }
//    CString &operator=(const CString &string) {
//        delete [] str;
//        len = string.len;
//        str = new char[len + 1];
//        strcpy(str, string.str);
//        return (*this);
//    }
//    ~CString() { delete [] str; }
//    void Print() { cout << str << endl; }
//};
//
//
//
//int main(void) {
//    CString str1 = "C++ Programming"; CString str2 = "Hello C++";
//    CString str3 = "Operator Overloading";
//    str1 = str2 = str3;
//
//    str1.Print();
//    str2.Print();
//    str3.Print();
//
//    return 0;
//}
















