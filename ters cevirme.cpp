#include<iostream>
#include<locale.h>
#include<string.h>

using namespace std;

int main(){
	
char isim[90];
int i;
	
	cout<<"Cumleyi Tersine Cevirmeye Hosgeldiniz !"<<endl;
	cout<<"Lutfen Ters Cevirmek istediginiz Cumleyi giriniz : ";
    gets(isim);
    
    for(i=strlen(isim)-1;i>=0;i--){
    	
    	cout<<isim[i];
    
	}
	
	
	
	
}
