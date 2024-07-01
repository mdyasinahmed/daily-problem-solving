#include<bits/stdc++.h>
using namespace std;

int main() {
	char str[101];
 
	cin >> str;
	int l  = strlen(str);
	sort(str, str+l);
	
    int count =0;
    for(int i=0; i<l; i++) {
        if(str[i] != str[i+1]) {
            count++;
        }
    }

    if(count%2==0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout<<"IGNORE HIM!" << endl;
    }
}
