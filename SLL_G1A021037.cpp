#include <iostream>

using namespace std;

//komponen
struct Mahasiswa{
 string Nama, NPM, Prodi;
 Mahasiswa *next;


};

Mahasiswa *head, *tail, *cur, *newNode, *del;

//buat single linked list
void createSingleLinkedList(string Nama, string NPM, string Prodi){
    head = new Mahasiswa();
    head->Nama = Nama;
    head->NPM = NPM;
    head->Prodi = Prodi;
    head->next = NULL;
    tail = head;

}

//tambahkan awal single linked list
void addFirst(string Nama, string NPM, string Prodi){
    newNode = new Mahasiswa();
    newNode->Nama = Nama;
    newNode->NPM = NPM;
    newNode->Prodi = Prodi;
    newNode->next = head;
    head = newNode;
}

//tambahkan akhir single linked list
void addLast(string Nama, string NPM, string Prodi){
    newNode = new Mahasiswa();
    newNode->Nama = Nama;
    newNode->NPM = NPM;
    newNode->Prodi = Prodi;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

//hapus awal
void removeFirst(){
    del = head;
    head = head->next;
    delete del;

}

//hapus akhir
void removeLast(){

    del = tail;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;

}

//cetak single linked list
void printSingleLinkedList(){
cur = head;
    while( cur != NULL ) {
        cout << "Nama Mahasiswa :" << cur->Nama << endl;
        cout << "NPM Mahasiswa :" << cur->NPM << endl;
        cout << "Prodi Mahasiswa  :" << cur->Prodi << endl;

        cur = cur->next;

    }

}

int main(){

    createSingleLinkedList("M.Anjasfedo Afridiansah", "G1A021037", "Informatika" );
   
    printSingleLinkedList();
   
    cout << "\n\n" << endl;

    addFirst("Fahmi Yohari Edward", "B1A021387", "Ilmu Hukum" );

    printSingleLinkedList();

    cout << "\n\n" << endl;

    addLast("Alif Thareq Aziz", "C1C021079", "Akuntansi" );

    printSingleLinkedList();

    cout << "\n\n" << endl;

    removeFirst();

    printSingleLinkedList();

    cout << "\n\n" << endl;

    addLast("Fardho Tri Kurniawan", "D1D021065", "Administrasi Publik" );

    printSingleLinkedList();

    cout << "\n\n" << endl;

    removeLast();

    printSingleLinkedList();

    cout << "\n\n" << endl;



}
