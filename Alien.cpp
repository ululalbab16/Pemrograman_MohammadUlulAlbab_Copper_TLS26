#include <iostream>
using namespace std;
int main() {
    char s[1005];
     cin >> s;

    int n = 0;
    while (s[n] != '\0') {
        if (s[n] >= 'a' && s[n] <= 'z') s[n] = s[n] - 'a' + 'A';
        n++;
    }

    char hasil[1005];
    for (int i = 0; i < n; i++) {
        int v = s[i] - 'A' + 1;                         
        int geser = (i == 0) ? 0 : (s[i - 1] - 'A' + 1);  
        hasil[i] = (char)(((v + geser - 1) % 26) + 'A');
    }
    hasil[n] = '\0';

     cout << hasil <<  endl;
    return 0;
}
