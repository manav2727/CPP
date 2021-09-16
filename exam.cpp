#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int number;
    for (int i =0; i<2; i++){
      cin >> number;
        if (number >=1 && number <=9){
            switch (number){
                case 1:
                cout << "one" << endl;
                break;
                case 2:
                cout << "two" << endl;
                break;
                case 3:
                cout << "three" << endl;
                break;
                case 4:
                cout << "four" << endl;
                break;
                case 5:
                cout << "five" << endl;
                break;
                case 6:
                cout << "six" << endl;
                break;
                case 7:
                cout << "seven" << endl;
                break;
                case 8:
                cout << "eight" << endl;
                break;
                case 9:
                cout << "nine" << endl;
                break;
            }
            if (number % 2 == 0){
              cout << "even" << endl;
            }
        }
        else if(number > 9 && number % 2 == 0){
            cout << "nine" << endl;
            cout << "even" << endl;
        }
        else if(number > 9 && number % 2 != 0){
            cout << "nine" << endl;
            cout << "odd" << endl;
        }
    }
}