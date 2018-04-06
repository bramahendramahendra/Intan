#ifndef TUBESINTAN_H_INCLUDED
#define TUBESINTAN_H_INCLUDED

#include <cstddef>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <cstdlib>

#define NIL NULL

using namespace std;

typedef struct elmlist_orang*address_orang;
typedef struct elmlist_pendidikan *address_pendidikan;
typedef struct elmlist_pengambilan *address_ambil;

//variabel Type untuk type infotype
struct type_tanggal_lahir
{
    string tanggal;
    string bulan;
    string tahun;
};

//Semua Infotype Program
struct infotype_orang{
    string id;
    string nama;
    type_tanggal_lahir tanggallahir;
};

struct infotype_pendidikan{
    string singkatan;
    string kepanjangan;
};

struct infotype_ambil{
    string ambil;
};

//Semua elemen list program
struct elmlist_orang{
    infotype_orang info;
    address_orang next;
    address_orang prev;
};

struct elmlist_pendidikan{
    infotype_pendidikan info;
    address_pendidikan next;
};

struct elmlist_ambil{
    infotype_ambil info;
    address_ambil next;
    address_ambil prev;
};

//Semua list program
struct list_orang{
    address_orang first;
    address_orang last;
};

struct list_pendidikan{
    address_pendidikan first;
};

struct list_ambil{
    address_ambil next;
    address_ambil prev;
};

//struktur data utama
struct atur{
    infotype_ambil
    infotype_orang IO;
    infotype_pendidikan IP;
    address_ambil AA;
    address_orang AO;
    address_pendidikan AP;
    list_ambil LA;
    list_orang LO;
    list_pendidikan LP;
};

address alokasi(infotype data);
/*  IS. terdefinisi suatu data yang akan dialokasikan di dalam memori,
    FS. mengahsilkan pointer p yang mengaju ke data baru, teralokasi kedalam memori */

void create_list(list &l);
/*  IS. sembarang,
    FS. terbentuk list l dengan first adalah NIL */

void insert_first(list &l,infotype data);
/*  IS. l sembarang, bisa masih kosong dan bisa sudah terisi beberapa elemen,
    FS. data ditambahakan menjadi elemen pertama dari list l */

void insert_last(list &l,infotype data);
/*  IS. l sembarang, bisa masih kosong dan bisa sudah terisi beberapa elemen,
    FS. data ditambahakan menjadi elemen terakhir dari list l*/

void view_list(list l);
/*  IS. l sembarang, bisa masih kosong dan bisa sudah terisi beberapa elemen,
    FS. menampilkan isi keseluruhan dari list l */

void delete_first(list &l);
/*  IS. l sembarang, bisa masih kosong dan bisa sudah terisi beberapa elemen,
    FS. elemen pertama dari list l di hapus dari list l, dealokasi data yang dihapus*/

void delete_last(list &l);
/*  IS. l sembarang, bisa masih kosong dan bisa sudah terisi beberapa elemen,
    FS. elemen terakhir dari list l di hapus dari list l, dealokasi data yang dihapus*/

bool search_node(list l,infotype data) ;
/*  IS. l sembarang, bisa masih kosong dan bisa sudah terisi beberapa elemen,
    FS. True jika data ada didalam list l, dan False untuk sebaliknya*/


#endif // TUBESINTAN_H_INCLUDED
