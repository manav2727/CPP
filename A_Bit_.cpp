#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, count = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        char pro[3];
        for (int j = 0; j < 3; j++)
            cin >> pro[j];
        // cout<<pro<<"\n";
        if (pro[2] == '+' || pro[0] == '+')
            count += 1;
        else
            count -= 1;
    }
    cout << count;
}