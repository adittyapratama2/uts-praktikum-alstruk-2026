 #include<iostream>
 #include<string>
 #include<iomanip>
using namespace std;


// ================ STACK ==============
class Stack {
	private:
		static const int MAX = 5;
		int data[MAX];
		int top;
		
		public:
			Stack(){
				top = -1;
			}
			
			//Cek stack penuh
			bool isEmpty(){
				return top == -1;
			}
			
			//Cek stack kosong
			bool isFull(){
				return top == MAX -1;
			}
			
			//Push
			void push(int noTransaksi){
				if(isFull()){
					cout << "Stack penuh! Tidak bisa menambah transaksi " << noTransaksi << endl;
				}else {
					data[++top] = noTransaksi;
					cout << "Push: T" << setw(3) << setfill('0') << noTransaksi << endl;
				}
			}
			
			//Pop
			void pop(){
				 if (isEmpty()) {
				 	cout << "Stack kosong! Tidak ada data yang di-pop.\n";
				 }else {
				 	cout << "Pop: T" << setw(3) << setfill('0') << data[top] << endl;
				 	top--;
				 }
			}
			
			//Peek
			void peek(){
				if(isEmpty()){
					cout << "Stack kosong!\n";
				}else {
					cout << "Transaksi teratas: T" << setw(3) << setfill('0') << data[top] << endl;
				}
			}
			
			//Tampil stack
			void tampil() {
				if(isEmpty()){
					cout << "Isi stack kosong.\n";
				}else {
					cout << "Isi Stack: ";
					for (int i = top; i >= 0; i--){
					cout << "T" << setw(3) << setfill('0') << data[i] << " ";
				}
				cout << endl;
			}
	}
};

// ============ QUEUE =============
class Queue {
	private:
		static const int MAX = 5;
		string data[MAX];
		int front, rear;
		
		public:
			Queue(){
				front = 0;
				rear = -1;
			}
			
			//Cek queue penuh
			bool isEmpty(){
				return rear < front;
			}
			
			//Cek queue kosong
			bool isFull(){
				return rear == MAX - 1;
			}
			
			//Enqueue
			void enqueue(string nama){
				if(isFull()){
					cout << "Queue penuh! Tidak bisa menambah " << nama << endl;
				}else {
					data[++rear] = nama;
						cout << "Enqueue: " << nama << endl;
					}
				}
			
			//Dequeue
			void dequeue(){
				if(isEmpty()){
					cout << "Queue kosong! Tidak ada pelanggan.\n";
				}else {
					cout << "Dequeue: " << data[front] << endl;
					front ++;
					}
				}
			
			//Peek queue
			void peek(){
				if(!isEmpty()){
					cout << "Pelanggan terdepan: " << data[front] << endl;
				}else {
					cout << "Queue kosong!\n";
					}
				}
			
			//Tampil queue
			void tampil(){
				cout << "Isi Queue: ";
				if(isEmpty()){
					cout << "Isi queue kosong.\n";
				}else {
					for (int i = front; i <= rear; i++){
						cout << data[i] << " ";
					}
					cout << endl;
				}
			}
};

// ========== MAIN ==========
int main(){
	cout << "===== STACK : RIWAYAT TRANSAKSI =====\n";
	Stack s;
	
	// Push 4 transaksi
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	s.tampil();
	
	//Peek
	s.peek();
	
	//Pop 2 transaksi
	s.pop();
	s.pop();
	
	s.tampil();
	
	cout << "\n===== QUEUE : ANTRIAN PELANGGAN =====\n";
	Queue q;
	
	//Enqueue 3 pelanggan
	q.enqueue("Budi");
	q.enqueue("Sari");
	q.enqueue("Eko");
	
	q.tampil();
	
	//Peek
	q.peek();
	
	//Dequeue 1 pelanggan
	q.dequeue();
	
	q.tampil();
	
	//Enqueue pelanggan baru
	q.enqueue("Dewi");
	
	q.tampil();
	
	return 0; 
}
