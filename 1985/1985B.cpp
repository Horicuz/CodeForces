#include <bits/stdc++.h>

using namespace std;    


void solve(){
    int n, k, summax = 0, x;
    cin >> n;
    for (int i = 2; i <= n;i++)
    {   
        k = 1;
        while(1){
        
            if(i*k > n)
                break;
            else
                k++;
        }
        k--;
        if(((i * k * (k + 1)) / 2) > summax)
            {summax = (i * k * (k + 1)) / 2;
            x = i;}
    }
    cout << x << endl;

}


int main() {
  int n;
  cin >> n;
  while(n--){
    solve();
  }
  
  return 0;
}