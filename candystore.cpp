#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y,z;
	while(t--){
	    cin>>x>>y>>z;
	    int temp=y*z;
	    if(x == temp || x < temp){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
