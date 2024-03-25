#include<iostream>

using namespace std;

int ModificarValor(int &a);

int main (){

int a;

a=1;

ModificarValor(a);

cout << a;
return 0;

}

int ModificarValor(int &a){

a=a*2;

}
