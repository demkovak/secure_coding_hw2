#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
    uint8_t type_under = 0;
    type_under -= 2;    //type overflow
    char no_zero[] = {'h','e','l','l','o'};
    cout << no_zero << endl;    //no end zero
    bool index_out[2] = {1,1};
    cout << "bool: " << index_out[5] << endl;   //index out of range
    char* alloc = new char[5];  //not freeing dynamically allocated memory
    cout << "alloc: " << *alloc << endl;    //using unitialized value
    if (type_under < 0) {
        cout << "unreachable";  //unreachable code
    }
    uint8_t c = 3.333;  //implicit conversion 
    cout << c << endl;
    char in[4] = {0,0,0,0};
    scanf("%s", in);    //buffer overflow
    printf(in); //format string vulnerability
    cout << endl;
    char pt[] = { 'a', 'a', 'a', 'a', 'a', 0 };
    char* ptr = &pt[0];
    for (uint8_t i = 0; i < sizeof(ptr); i++) { //using size of pointer
        cout << pt[i];
    }
    cout << endl;
    //char* ptr2 = NULL;
    //cout << "ptr2: " << *ptr2 << endl;  //null pointer dereference
    char del[] = "bbb";
    delete& del;    //deleting non dynamically allocated memory
    char* d = new char[3];
    delete[] d;
    cout << "deleted: " << *d << endl;   //accessing freed memory
}
