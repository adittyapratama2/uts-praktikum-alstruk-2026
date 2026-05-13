#include <iostream>
#include <string>
using namespace std;

//stack
string dataBuku[5];
int top = -1;

bool isFull(){
    return top == 4;
}

bool isEmpty(){
    return top == -1;
}

void push(string judulBuku){
    if(isFull()){
        cout << "stack penuh!\n";
    }else{
        top++;
        dataBuku[top] = judulBuku;
    }
}

void pop(){
    if(isEmpty()){
        cout << "stack kosong!\n";
    }else{
        cout << "judul buku " << dataBuku[top] << " dihapus!\n";
        top--;
    }
}

void peek(){
    if(isEmpty()){
        cout << "stack kosong!\n";
    }else{
        cout << "buku paling atas : " << dataBuku[top];
    }
}

void display() {
    if (isEmpty()) {
        cout << "Data kosong.";
    } else {
        cout << "Isi stack saat ini: ";
        for (int i = top; i >= 0; i--) {
            cout << dataBuku[i] << (i == 0 ? "" : ", ");
        }
    }
    cout << endl;
}

//queue
string dataAntrian[5];
int front = 0;
int rear = -1;

bool isFullQueue(){
    return rear == 4;
}

bool isEmptyQueue(){
    return rear == -1;
}

void enqueueQueue(string nama){
    if(isFullQueue()){
        cout << "antran perpustakaan penuh!\n";
    }else{
        rear++;
        dataAntrian[rear] = nama;
    }
}

void dequeueQueue(){
    if(isEmptyQueue()){
        cout << "antrian perpustakaan kosong!\n";
    }else{
        cout << "antrian anggota " << dataAntrian[front] << " dihapus!\n";
        front++;
    }
}

void peekQueue(){
    if(isEmptyQueue()){
        cout << "antrean perpustakaan kosong!\n";
    }else{
        cout << "Anggota Terdepan : " << dataAntrian[front];
    }
}

void displayQueue(){
    if(isEmptyQueue()){
        cout << "antrean perpustakaan kosong!\n";
    }else{
        cout << "antrian anggota perpustakaan : ";
        for(int i = front; i <= rear; i++){
            cout << dataAntrian[i] << (i == rear ? "" : ", ");
        }
    }
}



int main (){
    //stack
    push("Fisika Dasar");
    push("Kalkulus");
    push("algoritma");
    push("jaringan");
    peek();
    cout << endl;
    pop();
    pop();
    display();
    cout << endl;

    //queue
    enqueueQueue("Reza");
    enqueueQueue("Mia");
    enqueueQueue("Hendra");
    peekQueue();
    cout << endl;
    dequeueQueue();
    enqueueQueue("Putri");
    displayQueue();

return 0;
}
