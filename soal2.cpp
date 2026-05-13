#include <iostream>
#include <string>

using namespace std;

//Pertanyaan A: Tumpukan Buku (Stack)
struct StackBuku {
	int top = -1;
	int kapasitas = 5;
	string buku[5];
	
	bool isFull() { return top == kapasitas - 1; }
	bool isEmpty() { return top == -1; }
	
	void push(string judul) {
		if (isFull()) {
			cout << "Stack Full! Tidak bisa menambah buku: " << judul << endl;
		} else {
			top++;
			buku[top] = judul;
			cout << "Push: " << judul << " berhasil." << endl;
		}
	}
	
	void pop() {
		if (isEmpty()) {
			cout << "Stack kosong! Tidak ada buku yang dapat diambil." << endl;
		} else {
			cout << "Pop: " << buku[top] << " berhasil dikeluarkan." << endl;
			top--;
		} 
	}
	
	void peek() {
		if (isEmpty()) cout << "Stack Kosong." << endl;
		else cout << "Buku paling atas (Peek): " << buku[top] << endl; 
	}
	
	void tampilkan() {
		cout << "Isi Stack saat ini: ";
		if (isEmpty()) cout << "[kosong]";
		for (int i = 0; i <= top; i++) {
			cout << "|" << buku[i] << "| ";
		}
		cout << endl;
	}
};

//Pertanyaan B: Antrean Peminjaman (Queue)
struct QueueAnggota {
	int front = 0;
	int rear = -1;
	int kapasitas = 5;
	int count = 0;
	string nama[5];
	
	bool isFull() { return count == kapasitas; }
	bool isEmpty() { return count == 0; }
	
	void enqueue(string anggota) {
		if (isFull()) {
			cout << "QUEUE Full! Antrean penuh untuk: " << anggota << endl;
		} else {
			rear = (rear + 1) % kapasitas;
			nama[rear] = anggota;
			count++;
			cout << "Enqueue: " << anggota << " masuk antrean." << endl;
		}
	}
	
	void dequeue() {
		if (isEmpty()) {
			cout << "Queue kosong! Tidak ada antrean." << endl;
		} else {
			cout << "Dequeue: " << nama[front] << " selesai dilayani." << endl;
			front = (front + 1) % kapasitas;
			count--;
		}
	}
	
	void peek() {
		if (isEmpty()) cout << "Antrean kosong." << endl;
		else cout << "Antrian terdepan (Peek): " << nama[front] << endl;
	}
	
	void tampilkan() {
		cout << "Isi Queue saat ini: ";
		if (isEmpty()) {
			cout << "[kosong]";
		} else {
			int current = front;
			for (int i = 0; i < count; i++) {
			cout << "[" << nama[current] << "] ";
			current = (current + 1) % kapasitas;
			}
		}
		cout << endl;
	}
};

int main() {
	cout << "=== SIMULASI STACK (Tumpukan buku) ===" << endl;
	StackBuku s;
	s.push("Fisika Dasar");
	s.push("Kalkulus");
	s.push("Algoritma");
	s.push("Jaringan");
	s.peek();
	s.pop();
	s.pop();
	s.tampilkan();
	
	cout << "\n=== SIMULASI QUEUE (Antrean Peminjaman) ===" << endl;
	QueueAnggota q;
	q.enqueue("Reza");
	q.enqueue("Mia");
	q.enqueue("Hendra");
	q.peek();
	q.dequeue();
	q.enqueue("Putri");
	q.tampilkan();
	
	return 0;
}
