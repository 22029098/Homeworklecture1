#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[100];
	fgets(a,sizeof(a),stdin);
	strrev(a);
	cout<<a;
	return 0;
}
