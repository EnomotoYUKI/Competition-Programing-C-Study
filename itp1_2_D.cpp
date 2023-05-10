#include<bits/stdc++.h>
using namespace std;
/*
Question
長方形の中に円が含まれるかを判定するプログラムを作成してください。次のように、長方形は左下の頂点を原点とし、
右上の頂点の座標 (W,H)が与えられます。
また、円はその中心の座標 (x,y)と半径rで与えられます。
Input
５つの整数 W,H,x,y,r
が空白区切りで１行に与えられます。
Output
円が長方形の内部に含まれるなら Yes と、一部でもはみ出るならば No と１行に出力してください。
*/
int main(){
    int w,h,x,y,r;
    cin >> w >> h >> x >> y >> r;
    if( x+r<=w && y+r<=h && x-r>=0 && y-r>=0){
        cout << "Yes" << endl;
    }
    else{
        cout <<  "No" << endl;
    }
}