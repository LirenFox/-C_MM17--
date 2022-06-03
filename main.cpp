#include <iostream>

using namespace std;

int main()
{
    int a, b, m;
    cin >> a >> b;
    m = min(a, b);
    for(int i=m; i>0; i--){//從min(a, b)開始檢查是否為公因數
        if(a%i==0 && b%i==0){
            cout << i <<endl;
            break;
        }
    }
    return 0;
}
