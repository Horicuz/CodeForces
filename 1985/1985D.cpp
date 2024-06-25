#include <bits/stdc++.h>

using namespace std;    


void solve(){
    int m, n;
    
    pair<int, int> point;

    int ok = 0;
    int hashCount = 0;
    cin >> m >> n;
    char mat[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
            if(mat[i][j] == '#'){
                hashCount++;
                if(!ok){
                    point = {i, j};
                    ok = 1;
                }
            }
        }
    }

    int radius = sqrt((hashCount - 1) / 2);

    point.first += radius;
    cout << point.first + 1 << " " << point.second + 1 << endl;
    
}


int main() {
  int n;
  cin >> n;
  while(n--){
    solve();
  }
  
  return 0;
}