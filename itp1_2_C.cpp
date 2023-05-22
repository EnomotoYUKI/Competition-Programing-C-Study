#include <bits/stdc++.h>
using namespace std;
/*
Question
３つの整数を読み込み、それらを値が小さい順に並べて出力するプログラムを作成して下さい。
Input
３つの整数が空白で区切られて与えられます。
Output
小さい順に並べ替えた３つの整数を１行に出力して下さい。整数の間に１つの空白を入れて下さい。
Constraints
1 ≤ ３つの整数 ≤ 10,000
*/
int main(){
    int a,b,c;
    cin >> a >> b >>c;
    vector<int> arr;
    //配列の生成
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    //配列に要素を追加していく。
    //Pythonでいう arr.append()みたいな
    sort(arr.begin(), arr.end());
    //昇順にソートする
    //arr.begin()からarr.end()の範囲まで並び変える
    //つまりはじめから終わりまでだね
    for(int i = 0; i < arr.size(); i++){
        if(i > 0){
            cout << " ";
        }
        cout << arr[i];
    }
    cout << endl;
    return 0;
}