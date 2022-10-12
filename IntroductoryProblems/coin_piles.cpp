#include<bits/stdc++.h>
/*
3
2   1 YES
2   2 NO
3   3 YES

4  5
3  3
1  2
0  0

6  6
5  4
3  3
1  2
0  0     4 passos.

9  21
8  19
7  17
6  15
5  13
4  11
3  9
2  7
1  5

9   18
8   16
7   14
...
1   2
0   0
*/


using namespace std;

int main(){
    int t ,a, b;
    cin >> t;

    for(int i =0; i < t; i++){
        cin >> a >> b;
        if ((a + b) % 3 == 0 && min(a,b) *2 >= max(a,b))
            cout << "YES" << endl;
        else
             cout << "NO" << endl;
    }
  
}

