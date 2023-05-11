#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int divisionInt = a / b;
    int surplusInt = a % b;
    float divisionFroat = (float)a / (float)b;

    printf("%d %d %f",divisionInt,surplusInt,divisionFroat);
}