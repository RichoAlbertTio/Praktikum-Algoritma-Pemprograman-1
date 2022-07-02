// memasukan library
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;
/* membuat linked list */
struct Node
{
 string tahun,buku,pengarang;
 Node* next;
};
 Node* head;
 Node* tail;
 Node *b1,*b2;

// menginisialisasi head dan tail
void inisialisasi()
{
 head = NULL;
 tail = NULL;
}
/*
// untuk menampilkan pengurutan tahun
void muncul()
{
b1=head;
cout<<"\n Pengurutan data berdasarkan tahun\n";
while(b1!=NULL)
{
cout<<"buku      :"<<b1->buku<<endl;
cout<<"tahun     :"<<b1->tahun<<endl;
cout<<"pengarang :"<<b1->pengarang<<endl<<endl;
b1=b1->next;
cout<<" ";

}
}
*/
// fungsi untuk menambahkan data dari belakang Node
void Tambahbelakang()
{
	Node *akhir;
	akhir = new Node;
	cout << "\nMasukkan Data lengkap di bawah ini : " << endl;
	cout<<"Masukan Judul Buku         : "; cin.ignore(1, '\n'); getline(cin, akhir->buku);
	cout<<"Masukan Tahun Terbit Buku  : "; cin>>akhir->tahun;
	cout<<"Masukan pengarang          : "; fflush(stdin);getline(cin, akhir->pengarang);
	akhir->next = NULL;
	if(head==NULL)
	{
    head=tail=akhir;
    tail->next=NULL;
	}
	else
    {
	tail->next=akhir;
	tail=akhir;
    }
    cout<<"data dimasukan!!\n";
    getch();
}

// fungsi untuk menghapus dari depan Node
void Hapusdepan()
{
	Node *hapus;
	if (head==NULL)
	{
    cout<<"Data Kosong\n";
	}
	else
	{
	cout <<"Data depan terhapus!!";
    hapus=head;
    head=head->next;
    delete hapus;
	}
}

//fungsi untuk menghapus dari belakang node
void Hapusbelakang()
{
	Node *akhir, *hapus;
  	akhir=head;
  	if (head==NULL)
	{
		cout<<"Data Kosong\n";
	}
	else
	{
	cout <<"Data belakang terhapus!!";
    while(akhir)
    {
    if(akhir->next==tail){
    hapus=tail;
    tail=akhir;
    tail->next=NULL;
    delete hapus;
    break;
    }
    akhir=akhir->next;
    }
}
}

// Mencetak data
void cetak()
{
  int no = 1;
  Node *bantu;
  bantu = head;
  if (head==NULL)
 {
  cout<<" Data Kosong ";
 }
  else
 {
  while(bantu !=NULL)
 {
    cout<<"\nDATA -"<<no<<"\n";
    cout<<"judul buku   :"<<bantu->buku<<endl;
    cout<<"tahun terbit :"<<bantu->tahun<<endl;
    cout<<"pengarang    :"<<bantu->pengarang<<endl;
    cout<<"\n";
  no++;
  bantu = bantu->next;
  }
}
}

// Fungsi cari data
void cari()
{
    string pos;
    Node *bantu;
    bantu=head;
    cout<<"Judul Buku Yang Dicari : ";fflush(stdin); getline(cin, pos);
    while(bantu!=NULL)
    {
        if(bantu->buku==pos)
        {
          cout << "\n Judul Buku       : " << bantu->buku <<endl;
          cout << " Tahun Terbit     : " << bantu->tahun <<endl;
          cout << " Pengarang        : " << bantu->pengarang <<endl;
          cout<<"\n";
          break;
        }
        if(bantu->buku!=pos)
        {
        cout<<"\n Judul Buku Tidak Ditemukan!";
    	cout<<"n";
   		}

    bantu=bantu->next;
}
}

/*
void sort(){
    if (head==NULL){
    cout<<"Maaf Data Kosong..!!";
    getch();
    }
    string temp;
    for(b1=head;b1!=NULL;b1=b1->next){
     for(b2=b1->next;b2!=NULL;b2=b2->next){
      if(b1->tahun > b2->tahun){
      temp = b1->tahun;
      b1->tahun = b2->tahun;
      b2->tahun= temp;
      }
    }
  }
}
*/
void pengurutan()
{
	Node *urut, *urut2;
	string temp;
	urut=head;
	for(urut=head; urut!=NULL; urut=urut->next)
	{
	for(urut2=urut->next; urut2!=NULL; urut2=urut2->next)
	{
	if(urut->tahun > urut2->tahun)
	{
  		temp=urut->tahun ;
   		urut->tahun = urut2->tahun;
   		urut2->tahun = temp;
    }
	}
	}
}

void tampilpengurutan()
{
    Node *disp;

    cout<<" Urutan Data Buku Berdasarkan Tahun"<<endl;
    cout<<"===================================="<<endl;
    if(head==NULL)
	{
        cout << "\n Data Buku Kosong";
        return;
    }
    else
    {
    disp=head;
    while(disp!=NULL)
	{
    cout << "\n Tahun Buku            : " <<disp->tahun<<endl;
    cout << " Judul Buku            : " <<disp->buku<<endl;
    cout << " Pengarang Buku        : " <<disp->pengarang <<endl;
    disp=disp->next;
    }
   	cout <<"\n====================================";
    }
}
// program utama
int main(){
int pilih;
do
{
system("cls");
cout << "=================MENU UTAMA==================\n";
cout << "---------------------------------------------\n";
cout << "|  Pilih Menu Untuk Responsi Struktur Data  |\n";
cout << "---------------------------------------------\n";
cout << "| 1. Tambah Dari Belakang                   |\n";
cout << "| 2. Hapus Dari Depan                       |\n";
cout << "| 3. Hapus Dari Belakang                    |\n";
cout << "| 4. Cetak Semua Data                       |\n";
cout << "| 5. Cari data                              |\n";
cout << "| 6. Mengurutkan data                       |\n";
cout << "| 0. keluar                                 |\n";
cout << "---------------------------------------------\n";
cout << "PILIHAN ANDA  = ";
cin>>pilih;
switch(pilih){

case 1 : Tambahbelakang();
         getch();
         break;

case 2 : Hapusdepan();
         getch();
         break;

case 3 : Hapusbelakang();
         getch();
         break;

case 4 : cetak();
         getch();
         break;

case 5 : cari();
         getch();
         break;

case 6 : tampilpengurutan();
         pengurutan();
         tampilpengurutan();
         getch();
         break;

case 0 : exit(true);
         break;
         default :
         cout<<"Menu tidak tersedia!"<<endl;
         cout << "Tekan Enter untuk kembali ke menu!";
         getch();
      }
      }while(pilih != 0);
    return pilih;
}


/*
void mengurutkan(){
    //Deklarasi Data
    int data[100];
     //Deklarasi Pengulangan
    int i, j, n, tmp, jumlah=0;
    Node *curr;
	curr = head;
      if(head == NULL)
            cout<<"\ntidak ada data dalam linked list"<<endl;
      else
      {
            cout<<"\nData yang ada dalam linked list adalah"<<endl;
            while(curr!=NULL)
            {
                  cout<<curr->tahun<<" ";
                  curr = curr->next;

            }
      //Masukan Banyak Data
      cout<<"\nMasukkan jumlah yang masukan : ";
      cin>>n;
      cout<<"Masukan data yang sudah ada : "<<endl;
     for(i=0; i<n; i++)  {
     		//Memasukan data
             cout<<"Masukan Angka ke "<<(i+1)<<" = ";
              cin>>data[i];
               jumlah=jumlah+data[i];
        }

	//Tampilan Data sebelum
  cout<<"\nData sebelum diurutkan "<<endl;
   for(i=0; i<n; i++)
         {
         cout<<data[i]<<" ";
       }
     cout<<endl;
	//Disini Proses pengurutan data Bubble Sort
     for( i=0; i<n; i++)
      {
          for(j=i+1; j<n; j++)
          {
               if(data[i]>data[j])
             {
                 tmp=data[i];
                 data[i]=data[j];
                 data[j]=tmp;
             }
         }
      }
      // Tampilan data setelah
         cout<<"\nData setelah diurutkan "<<endl;
       for(i=0; i<n; i++)
       {
         {
           cout<<data[i]<<" ";
         }
       }
getch();
}
}
*/

