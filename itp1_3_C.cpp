#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int> > arr;
    vector<int> temp;
    temp.push_back(0);
    temp.push_back(0);
    int a,b;
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        if(a < b){
            temp[0] = a;
            temp[1] = b;
        }
        else{
            temp[0] = b;
            temp[1] = a;
        }
        arr.push_back(temp);
    }
    for(int i = 0;i < arr.size() ;i++){
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }
    return 0;
}