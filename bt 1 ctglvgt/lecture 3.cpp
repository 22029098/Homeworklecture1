#include <iostream>
using namespace std;
int main(){
	int m, n, gdc, temp;
	cin>>m>>n;
	if (n == 0) {
        gdc = m;
    } else {
        if (n > m) {
            temp = m;
            m = n;
            n = temp;
        }
	for(int i=1;i<m;i++){
		if(m % i==0 && n % i==0){
			gdc=i;
		}
	}
}
	cout<<gdc;
	return 0;
}
