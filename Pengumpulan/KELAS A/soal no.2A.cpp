#include <iostream>
#include <string>
using namespace std;

int riwayat[5];
int top = -1;
int jumlah = 5;

//isfull
bool isfull(){
	return top == 4;
}

//isempty
bool isempty (){
	return top == -1;
}
//masukan data stack
void push (int notransaksi){
	if (isfull()){
		cout<<"stack penuh!/n";
	}else{
		top ++;
		riwayat[top] = notransaksi;
	}
}
//hapus data stack 
void pop(){
	if (isempty()){
		cout<<"stack kosong!/n";
	}else{
		cout<<"T00"<<riwayat[top]<<" dihapus"<<endl;
		top --;
	}
}
//melihat keseluruhan data
void peek(){
	if(isempty()){
		cout<<"stack kosong!";
	}else{
		riwayat[top];
	}
}

int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	peek();
	cout<<endl;
	pop();
	pop();
	
	for(int i=top; i >= 0; i--)
	cout<<"T00"<<riwayat[i]<<endl;
	
	return 0;
}
