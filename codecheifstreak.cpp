#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	   for(i=0; i<n; i++){
	       cin>>a[i];
	   }
	   for(i=0; i<n; i++){
	       cin>>b[i];
	   }
	   int maximum_number_om=INT_MIN;       //INT_MIN is count minimum number
	   int maximum_number_addy=INT_MIN;
	   int max_om=0;
	   int max_addy=0;
	   for(i=0; i<n; i++){
	       if(a[i]==0){
	           max_om=0;
	       }
	       else {
	           max_om++;
	       }
	       if(b[i]==0){
	           max_addy=0;
	       }
	       else {
	           max_addy++;
	       }
	       maximum_number_om=max(maximum_number_om,max_om);
            maximum_number_addy=max(maximum_number_addy,max_addy);
	   }

	   if(maximum_number_om>maximum_number_addy){
	       cout<<"Om"<<endl;
	   }
	   else if(maximum_number_addy==maximum_number_om){
	       cout<<"Draw"<<endl;
	   }
	   else{
	       cout<<"Addy"<<endl;
	   }
	}
	return 0;
}
