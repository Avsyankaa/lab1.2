#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main() {
  int m, n, s;
  cout << "Enter n" << endl;
  cin >> n;
  cout << "Enter m:" << endl;
  cin >> m;
  int k;
  cout << "Enter k:" << endl;
  cin >> k;
  int a[n][m];
  int b[m][k];
  int c[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++) {
      cin >> b[i][j];
    }
  };
  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      s = 0;
      for (int z = 0; z < m; z++) s = s + a[i][z] * b[z][j];
      cout << s << " ";
    }
    cout << endl;
  }
}
