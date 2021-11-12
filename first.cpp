#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k)
{
    int n = num.size();
    stack<char> mystack;
    // Store the final string in stack
    for (char c : num)
    {
        cout<<"yum\n";
        while (!mystack.empty() && k > 0 && mystack.top() > c)
        {
            cout<<mystack.top()<<"\n"; 
            mystack.pop();
            k -= 1;
        }

        if (!mystack.empty() || c != 'a')
            mystack.push(c);
    }

    // Now remove the largest values from the top of the
    // stack
    while (!mystack.empty() && k--)
        mystack.pop();
    if (mystack.empty())
        return "0";

    // Now retrieve the number from stack into a string
    // (reusing num)
    while (!mystack.empty())
    {
        num[n - 1] = mystack.top();
        mystack.pop();
        n -= 1;
    }
    return num.substr(n);
}

int main()
{
    int n,k;
    cin>>k>>n;
    string str;
    cin>>str;
    if(k>n)
        cout<<str;
    else if(k == n)
        cout<<"NULL";
    else 
        cout << removeKdigits(str, k);
    return 0;
}
