#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool isFull(){
	if(top >= max){
		return true;
	}else{
		return false;
	}
}
bool isEmpty(){
	if(top == 0){
		return true;
	}else{
		return false;
	}
}

void view(){
	if(!isEmpty()){
		cout << "Data Tersimpan : " << endl;
		for(int a = 0; a < top; a++){
			cout << a+1 << ". " << data[a] << endl;
		}
	}else{
		cout << "Data Kosong" << endl;
	}
	if (isFull()){
		cout << "Data Penuh" << endl;
	} 
	cout << endl;
}
void push(){
	if(!isFull()){
		cout << "Masukkan Data : ";
		cin >> data[top];
		top++;
	}
}
void pop(){
	if(!isEmpty()){
		top--;
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int pil;
	string isi;
	
	stack :
		system ("cls");
		view();
		cout << "Menu Utama\n 1. Push\n 2. Pop\n Pilih : ";
		cin >> pil;
	
	if(pil==1){
		system ("cls");
		push();
		goto stack;
	}else if (pil == 2){
		system ("cls");
		pop();
		goto stack;
	}
	return 0;
}