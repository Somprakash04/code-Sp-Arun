#include <iostream>
using namespace std;
int main (){
	for (int i=3; i<=10;i++){
		if (i==0){
			continue;
		}
		cout<<i<<endl;
	}
	return 0
}