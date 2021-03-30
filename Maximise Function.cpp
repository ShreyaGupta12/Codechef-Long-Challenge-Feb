#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,i;
	    cin>>n;
	    long long a[n];
	    long long max=-2147483648;
	    long long min=2147483647;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        if(max<a[i]) max=a[i];
	        if(min>a[i]) min=a[i];
	    }
	    cout<<(2*(max-min))<<endl;
	}
	return 0;
}
