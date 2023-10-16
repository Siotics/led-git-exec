# led-git-exec

Repository latihan git dan implementasi function untuk anggota baru ekskul

## ledLibrary.h

File header untuk library ledLibrary

Mengenai penjelasan file header dapat merujuk [link berikut](https://www.simplilearn.com/tutorials/cpp-tutorial/guide-to-understand-cpp-header-files)

### Penggunaan

Untuk contoh penggunaan dapat melihat led-git-exec.ino

Include file **ledLibrary.h** ke dalam file ino dengan tanda petik

```cpp
#include "ledLibrary.h" //Jika di direktori yang sama
#include "./direktori/ledLibrary.h" //Jika di direktori yang berbeda
```

#### TurnExec(uint8_t led, uint8_t act)

Fungsi untuk menyalakan atau mematikan sebuah lampu, menerima dua parameter **led** dan **act** di mana act adalah aksi yang akan dilakukan (0 untuk mati, 1 untuk hidup)

Contoh:

```cpp
void loop(){
    TurnExec(5, 1); //Menyalakan lampu di pin 5
    TurnExec(5, 0); //Mematikan lampu di pin 5
}
```

#### TurnLoop(uint8_t start, uint8_t end, int increment)

Fungsi untuk menyalakan dan mematikan lampu dalam sebuah loop, menerima tiga parameter **start**, **end**, dan **increment**

**start** tidak boleh lebih kecil daripada **end**

Contoh:

```cpp
void loop(){
    TurnLoop(1, 5, 1); //Menyalakan dan mematikan lampu dari pin 1 hingga 5 dengan 1 lompatan atau increment
    TurnLoop(6, 10, 2); //Menyalakan dan mematikan lampu dari pin 6 hingga 10 dengan 2 lompatan atau increment
}
```

#### ChangePointer(int &source, int change)

Fungsi untuk mengubah angka **source** menjadi **change**

Pengenalan kepada Pointer

Contoh:
```cpp
int source = 5;

void loop(){
    ChangePointer(source, 1); //Mengubah angka source menjadi 1
}
```