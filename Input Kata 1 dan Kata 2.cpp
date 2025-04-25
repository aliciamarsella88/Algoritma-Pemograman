#include <iostream>
#include<string.h>
using namespace std;
main()
{
	char A[15];
	char B[15];
	cout<<"Masukkan kata 1 : ";cin>>A;
	cout<<"Masukkan kata 2 : ";cin>>B;
	if(strcmp(A,B) == 0){
		cout<<"Kata 1 dan Kata 2 sama"<<endl;
	}else{
		cout<<"Kata 1 dan Kata 2 tidak sama"<<endl;
	}
return 0;
}

