#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int y=1;
    int z=1;
    int x, b=0;
    int dizi[100];
    cout<<"İkili sistemdeki sayıyı giriniz."<<endl;
    cin>>x;
    for(int t=1; t<2; t++){
        if (x==0){
            cout<<"0";
            exit(0);
        }
        else
            continue;
    }
    if(y==x){
        cout<<"1";
        exit(0);
    }
    else
        y*=10;
    for(;x>=y;){
        y=10*y;
        z=10*z;
    }
    x-=z;
    dizi[b]=1;
    b++;
    for(; x!=0;){
        z/=10;
        for(; x<z;){
            z=z/10;
            dizi[b]=0;
            b++;
        }
        x=x-z;
        dizi[b]=1;
        b++;
    }
    for(; z!=1;){
        z=z/10;
        dizi[b]=0;
        b++;
    }
    b--;
    int c=b;
    int a=0;
    for(;b!=(0-1);){
        int d=1;
        for(int i=1; i<=(c-b); i++) {
		d *= 2;
	}
        d *= dizi[b];
        a+=d;
        b--;
    }
    cout<<a;
    return 0;
}