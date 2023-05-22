#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int num;
    while(true){
        cin >> num;
        if(num == 0){
            break;
        }
        arr.push_back(num);
    }
    for(int i = 0;i < arr.size();i++){
        cout << "Case " << i+1 << ": " << arr[i] << endl;
    }
    return 0;
}