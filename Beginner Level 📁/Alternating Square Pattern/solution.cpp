#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i1=0;
	
	
	for(int i=0; i<n; i++){
	    if(i%2==0){
	        for(int j=(10*i1)+1; j<=(i+1)*5; j++){
	            cout<<j<<" ";
	        }
	        i1++;
	        cout<<endl<<endl;
	    }
	    else{
	        for(int k=(i+1)*5; k>=(5*i)+1; k--){
	            cout<<k<<" ";
	        }
	        cout<<endl;
	    }
	}
}