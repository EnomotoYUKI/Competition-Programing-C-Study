#include <bits/stdc++.h>
//これで必要なライブラリを全部使える
using namespace std;
//これがないと cin coutを使うのに std:: を入れないといけない
//std名前空間に存在する cin関数 という意味らしい

int main(){
    int a,b;
    cin >> a >> b;
    //シーイン と読む スペースで区切られていると
    //分割で受け取れる
    if(a > b){
        cout << "a > b" << endl;
        //シーアウト と読む 出力に必要
    }else if(a < b){
        cout << "a < b" << endl;
    }else{
        cout << "a == b" << endl;
    }
    return 0;
}