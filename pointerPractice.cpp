#include <iostream>
using namespace std;

class samp{
		int i;     // private なメンバ変数 (private キーワードの省略)
	public:
		samp(int n){i=n;}       // 引数つきのコンストラクタ
		void set_i(int n){i=n;} // i に値をセット
		int get_i(){return i;}  // i の値を取得
};

int main(){
  // 通常の変数の宣言
  int i=10;
  samp a(10);  // 初期値 10 でクラス samp のオブジェクト a を宣言
  int A[2] = {2, 4};  // 要素数 2 の配列

  // ポインタ変数の宣言
  int *p1;
  int *p2;
  samp *p3;
  int *p4;

  // ポインタの初期化
  p1 = &i;     // 変数からのアドレスの取り出し
  p2 = p1;     // p2 の指す先を p1 と同じにする
  p3 = &a;     // クラス変数からのアドレスの取り出し
  p4 = A;      // p4 = &A[0]; ともかける

  // ポインタの利用
  cout << "p1 の指す値は:" << *p1 << "\n";
  cout << "p2 の指す値は:" << *p2 << "\n";
  cout << "p3 の指すクラスのメンバ変数は:" << p3->get_i() << "\n";
  cout << "p4 の指す配列の要素は:" << p4[0] << "," << p4[1] << "\n";

  return 0;
}