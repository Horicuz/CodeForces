#include <bits/stdc++.h>

using namespace std;    


void solve(){
    int n, count = 0, max = -1;
    int64_t sum = 0;
    int arr[200000];
    cin >> n;
    for (int i = 0; i < n;i++)
    {   
        cin >> arr[i];
        sum = sum + arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if(sum - max == max)
        {
            count++;
        }
    }
    cout << count << endl;
}


int main() {
  int n;
  cin >> n;
  while(n--){
    solve();
  }
  
  return 0;
}