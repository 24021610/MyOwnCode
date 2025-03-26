#include<iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void print(vector<int> arr, int n)
{
    for(int i=0 ;i<n; i++)
    {
        cout << arr[i] << ' ';
    }
}

vector<int> sum(vector<int> num, int x)
{
    int n=(int)num.size();
    bool flag=false;
    int carry = 0;

    while (x!=0)
    {
        for(int i=0;i<n;i++)
        {
            int product = (carry + num[i]* (x%10));
            if(!flag)num[n-1-i] = (product % 10);
            else num[n-1-i] += (product % 10);
            carry = (product / 10);
        }
        num.insert(num.begin(),carry);
        flag=true;
        x/=10;
    }
    return num;
}


int main()
{
    vector<int> arr = {1,2,3};
    vector<int> k = sum(arr, 14);
    print(k, (int)k.size());
}
