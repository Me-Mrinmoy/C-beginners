#include <iostream>
using namespace std;

int main (){

    int age;
    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You can vote";
    }

    if (age > 150 || age < 1){
        cout << "Invalid age";
    }

    else if (age << 18) {
        cout << "You can vote";
    }

    else {
        cout << "You can not vote";
    }
}
