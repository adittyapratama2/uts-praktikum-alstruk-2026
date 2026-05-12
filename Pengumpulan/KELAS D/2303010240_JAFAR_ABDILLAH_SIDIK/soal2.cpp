#include <iostream>

using namespace std;

#define MAX_STACK 5
#define MAX_QUEUE 5

class StackBuku {
	private :
		string buku[MAX_STACK];
		int top;
	
	public :
		StackBuku() { top = -1; }
	
	bool isFull() {
		return top == MAX_STACK -1;
	}
	
	bool isEmpty() {
		return top == -1;
	}
	
	void push(string judul) {
		if (isFull()){
			cout << "[Penuh] Stack penuh! tidak dapat menambah buku : " << judul << endl;
		} else {
			top++;
			buku[top] = judul;
			cout << "[Push] Berhasil menambahkan: " << judul << endl;
		}
	} 
	
	void pop() {
		if (isEmpty()){
			cout << "[Gagal] Stack kosong! Tidak ada buku yang bisa diambil" << endl;
		} else {
			cout << "[Pop] Mengambil buku: " << buku[top] << endl;
			top--;
		}
	}
	
	void peek() {
		if (isEmpty()){
			cout << "[Peek] Stack kosong" << endl;
		} else {
			cout << "[Peek] Buku paling atas saat ini : " << buku[top] << endl;
		}
	}
	
	void display() {
		cout << "--- Isi Stack Saat ini ---" << endl;
		if (isEmpty()){
			cout << "(Kosong)" << endl;
		} else {
			for (int i = top; i >= 0; i--) {
				cout << " [" << i << "] " << buku[i] << endl;
			}
		}
		cout << "--------------------------" << endl;
	}
	
	
};

class QueuePeminjaman {
	private:
		string antrian[MAX_QUEUE];
		int front, rear;
		
	public:
		QueuePeminjaman(){
			front = -1;
			rear = -1;
		}
		
	bool isFull() {
		return rear == MAX_QUEUE -1;
	}
	
	bool isEmpty() {
		return front == -1 || front > rear;
	}
	
	void enqueue(string nama){
		if (isFull()){
			cout << "[Penuh] Antrian penuh untuk: " << nama << endl;
		} else {
			if (front == -1) front = 0;
			antrian[++rear] = nama;
			cout << "[Enqueue] Anggota masuk: " << nama << endl;
		}
	}
	
	void dequeue() {
		if (isEmpty()){
			cout << "[Kosong] Antrian sudah kosong" << endl;
		} else {
			cout << "[Dequeue] Melayani anggota: " << antrian[front++] << endl;
			if (front > rear) {
				front = rear = -1;
			} 
		}
	}
	
	void peek() {
		if (isEmpty()){
			cout << "[Peek] Antrian kosong" << endl;
		} else {
			cout << "[Peek] Anggota terdepan : " << antrian[front] << endl;
		}
	}
	
	void display() {
		cout << "--- Isi Antrian (Queue) ---" << endl;
		if (isEmpty()){
			cout << "(Antrian Kosong)" << endl;
		} else {
			for (int i = front; i<=rear; i++) {
				cout << "-> "<< antrian[i] << " ";
			}
			cout << endl;
		}
		cout << "---------------------------" << endl;
	}
	
};

int main() {
	StackBuku rakKembali;
	QueuePeminjaman q;
	
	cout << "=== Simulasi Stack ===" << endl;
	rakKembali.push("Fisika Dasar");
	rakKembali.push("Kalkulus");
	rakKembali.push("Algoritma");
	rakKembali.push("Jaringan");
	cout << endl;
	
	rakKembali.peek();
	cout << endl;
	
	cout << "=== Mengeluarkan 2 Buku ===" << endl;
	rakKembali.pop();
	rakKembali.pop();
	cout << endl;
	
	rakKembali.display();
	
	cout << "=== Simulasi Queue ===" << endl;
	q.enqueue("Reza");
	q.enqueue("Mia");
	q.enqueue("Hendra");
	q.display();
	
	q.peek();
	
	q.dequeue();
	q.display();
	
	q.enqueue("Putri");
	q.display();
	
	return 0;
}
