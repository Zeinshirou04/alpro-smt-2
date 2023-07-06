#include "header.h"

int main() {

    // Declaring Variable
    int arr[5] = {34, 23, 68, 23, 14}, num;
    int *p = arr, *q;

    // Case 1

    // cout << "Input n from 1 - 5 : ";
    // cin >> num;
    // p += (num - 1);
    // cout << "Your value by n is at address " << p << " and value is " << *p << endl;
    
    // Case 2

    // cout << endl << "Modification array value using pointer" << endl;
    // for(int i = 0; i < 5; i++) {
    //     p = arr;
    //     p += i;
    //     cout << "Input your new value for address " << p << " : ";
    //     cin >> *p;
    // }
    // cout << endl;
    // for(int i = 0; i < 5; i++) {
    //     p = arr;
    //     p += i;
    //     cout << "Your new value on address " << p << " is " << *p << endl;
    // }
    // cout << endl;

    // Case 3

    // num = 12;
    // p = &num;
    // cout << endl << "pre & post increment with pointer" << endl;
    // cout << "Known if value is " << num << endl;
    // cout << "With pre, value is " << *p << endl;
    // cout << "With post, value from " << num++ << " become " << num << endl;
    // cout << "With post, value from " << *p++ << " become " << *p << endl;

    // p = &arr[0], q = &arr[4];
    // cout << "Known both address is " << p << " and " << q << endl;
    // cout << "So " << p << " - " << q << " is equal to " << p - q << endl;
    // q = q - 2;
    // cout << "So " << p << " - " << 2 << " is equal to " << q << endl;


    // ADT Case 1
    // newType Person;
    // cout << "Hey, tell me your name, I'm ";
    // cin >> Person.name;
    // cout << "For our data, how old are you? I'm ";
    // cin >> Person.age;
    // cout << "Your height? I'm ";
    // cin >> Person.height;

    // ADT Case 2
    cout << "Aritmathics operation" << endl;
    aritmathics Math;
    cout << "Input your first value : ";
    cin >> Math.val1;
    cout << "Input your second value : ";
    cin >> Math.val2;
    Math.sum = Math.val1 + Math.val2;
    cout << "The summary of " << Math.val1 << " + " << Math.val2 << " is " << Math.sum << endl;

    return 0;
}