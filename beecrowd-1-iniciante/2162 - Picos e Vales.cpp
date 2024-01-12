#include <iostream>

using namespace std;

int main(){
    int n, most=1, a[101], cont1=0, cont2=0;

    cin >> n;

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    if(a[0] < a[1]){
    for(int i = 0; i < n-1; i++){
    	if(i % 2 == 0){
    	if(a[i] < a[i+1]) {
         cont1++;
    	}
    }else{
       if(a[i] > a[i+1])
        cont2++;
       }
   }
    }else if(a[0] > a[1]){
        for(int i = 0; i < n-1; i++){
    	if(i % 2 == 0){
    	if(a[i] > a[i+1]){
    		cont1++;
    	}
    }else{
        if(a[i] < a[i+1]){
        	cont2++;
        }
    }
  }
    }

    if(cont1 + cont2 + 1 == n){
        cout << 1 << endl;
    }else{
     cout << 0 << endl;
     }
    return 0 ;
}
