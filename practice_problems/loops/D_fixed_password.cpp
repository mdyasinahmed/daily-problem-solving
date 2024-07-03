#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, c=1999;
    
    while(scanf("%d", &x) == 1) {
        if(x==c) {
            printf("Correct\n");
            break;
        } else{
            printf("Wrong\n");
        }
    }

    return 0;
}