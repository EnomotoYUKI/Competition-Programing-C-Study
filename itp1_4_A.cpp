#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int divisionInt = a / b;
    int surplusInt = a % b;
    float divisionFloat = (float)a / (float)b;
    //doubleを使おう
    cout << divisionInt << " " << surplusInt << " " << divisionFloat << endl;
}