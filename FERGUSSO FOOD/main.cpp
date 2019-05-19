#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <time.h>

using namespace std;

struct List_Makanan
{
    char nama[30][30], kategori [30][30], Deskripsi[30][100], Toko[30][100], AToko[30][100];
    int Harga[30];
}m,k,w;
int a=1,z=2, detil, bin=0, ker=0;
char menupil;

void isimakanan()
{
    strcpy(m.nama[1],"Arabica Coffea");
    strcpy(m.kategori[1],"Minuman");
    strcpy(m.Deskripsi[1],"Kopi lebut, manis, menggugah selera");
    strcpy(m.Toko[1],"Aero Coffenery Bandung");
    strcpy(m.AToko[1],"Jln Terusan koro katapang no 138");
    m.Harga[1]=35000;

    strcpy(m.nama[2],"Robusta Coffea");
    strcpy(m.kategori[2],"Minuman");
    strcpy(m.Deskripsi[2],"Kopi nikmat tiadatara");
    strcpy(m.Toko[2],"Aero Coffenery Bandung");
    strcpy(m.AToko[2],"Jln Terusan koro katapang no 138");
    m.Harga[2]=30000;

    strcpy(m.nama[3],"Toraja Coffea");
    strcpy(m.kategori[3],"Minuman");
    strcpy(m.Deskripsi[3],"Kopi asli toraja");
    strcpy(m.Toko[3],"Aero Coffenery Bandung");
    strcpy(m.AToko[3],"Jln Terusan koro katapang no 138");
    m.Harga[3]=23000;

    strcpy(m.nama[4],"Ayam Bakar Madu");
    strcpy(m.kategori[4],"Makanan");
    strcpy(m.Deskripsi[4],"Dibumbui madu asli dan dibakar");
    strcpy(m.Toko[4],"Ayam Bakar Mr.Jos Bandung");
    strcpy(m.AToko[4],"jl Ahmad yani No 826 bandung");
    m.Harga[4]=15000;

    strcpy(m.nama[5],"Ayam Saus Tiram Bakar");
    strcpy(m.kategori[5],"Makanan");
    strcpy(m.Deskripsi[5],"Aroma saus tiram yang menggoda");
    strcpy(m.Toko[5],"Ayam Bakar Mr.Jos Bandung");
    strcpy(m.AToko[5],"jl Ahmad yani No 826 bandung");
    m.Harga[5]=16000;

    strcpy(m.nama[6],"Kulit Ayam Bakar");
    strcpy(m.kategori[6],"Makanan");
    strcpy(m.Deskripsi[6],"Kulit dari ayam spesial");
    strcpy(m.Toko[6],"Ayam Bakar Mr.Jos Bandung");
    strcpy(m.AToko[6],"jl Ahmad yani No 826 bandung");
    m.Harga[6]=6000;

    strcpy(m.nama[7],"Bakmi Ayam");
    strcpy(m.kategori[7],"Makanan");
    strcpy(m.Deskripsi[7],"Bakmi spesial ayam");
    strcpy(m.Toko[7],"Bakmi AM Ujung Pandang");
    strcpy(m.AToko[7],"Jl. Burangran<<setw(5)g No.39 Bandung");
    m.Harga[7]=17000;

    strcpy(m.nama[8],"Bakmi Baso");
    strcpy(m.kategori[8],"Makanan");
    strcpy(m.Deskripsi[8],"Bakmi spesial baso");
    strcpy(m.Toko[8],"Bakmi AM Ujung Pandang");
    strcpy(m.AToko[8],"Jl. Burangrang No.39 Bandung");
    m.Harga[8]=15000;

    strcpy(m.nama[9],"Bakmi Jogja");
    strcpy(m.kategori[9],"Makanan");
    strcpy(m.Deskripsi[9],"Bakmi asli jogja");
    strcpy(m.Toko[9],"Bakmi AM Ujung Pandang");
    strcpy(m.AToko[9],"Jl. Burangrang No.39 Bandung");
    m.Harga[9]=20000;

    strcpy(m.nama[10],"Bakso Urat");
    strcpy(m.kategori[10],"Makanan");
    strcpy(m.Deskripsi[10],"Bakso urat ayam");
    strcpy(m.Toko[10],"Bakso Kawi Bandung");
    strcpy(m.AToko[10],"Jl Sudirman No 107 Kode Pos 40212");
    m.Harga[10]=14000;

    strcpy(m.nama[11],"Bakso Granat");
    strcpy(m.kategori[11],"Makanan");
    strcpy(m.Deskripsi[11],"Bakso yang sangat pedas");
    strcpy(m.Toko[11],"Bakso Kawi Bandung");
    strcpy(m.AToko[11],"Jl Sudirman No 107 Kode Pos 40212");
    m.Harga[11]=15000;

    strcpy(m.nama[12],"Soto Kudus");
    strcpy(m.kategori[12],"Makanan");
    strcpy(m.Deskripsi[12],"Nikmat dan menggoda");
    strcpy(m.Toko[12],"Dapur Sotoku Bandung");
    strcpy(m.AToko[12],"Jl Sudirman No 107 Kode Pos 40212");
    m.Harga[12]=13000;

    strcpy(m.nama[13],"Soto Ayam");
    strcpy(m.kategori[13],"Makanan");
    strcpy(m.Deskripsi[13],"Dari kaldu ayam asli");
    strcpy(m.Toko[13],"Dapur Sotoku Bandung");
    strcpy(m.AToko[13],"Jl Sudirman No 107 Kode Pos 40212");
    m.Harga[13]=10000;

    strcpy(m.nama[14],"Coto Makassar");
    strcpy(m.kategori[14],"Makanan");
    strcpy(m.Deskripsi[14],"Dari kaldu ayam asli");
    strcpy(m.Toko[14],"Dapur Sotoku Bandung");
    strcpy(m.AToko[14],"Jl Sudirman No 107 Kode Pos 40212");
    m.Harga[14]=25000;

    strcpy(m.nama[15],"Jus Jeruk Nipis");
    strcpy(m.kategori[15],"Minuman");
    strcpy(m.Deskripsi[15],"Tidak asam tapi manis");
    strcpy(m.Toko[15],"Kedai Barba Bandung");
    strcpy(m.AToko[15],"Jl Barisan Banteng No 20 f");
    m.Harga[15]=5000;

    strcpy(m.nama[16],"Indomie Bakar Manis");
    strcpy(m.kategori[16],"Makanan");
    strcpy(m.Deskripsi[16],"Lebih enak dari sate");
    strcpy(m.Toko[16],"Kedai Barba Bandung");
    strcpy(m.AToko[16],"Jl Barisan Banteng No 20 f");
    m.Harga[16]=9000;

    strcpy(m.nama[17],"Lemon Tea Milk");
    strcpy(m.kategori[17],"Minuman");
    strcpy(m.Deskripsi[17],"Perasan lemon asli");
    strcpy(m.Toko[17],"Kedai Barba Bandung");
    strcpy(m.AToko[17],"Jl Barisan Banteng No 20 f");
    m.Harga[17]=6000;

    strcpy(m.nama[18],"Japanese Milk");
    strcpy(m.kategori[18],"Minuman");
    strcpy(m.Deskripsi[18],"Teh asli import dari jepang");
    strcpy(m.Toko[18],"Kedai Barba Bandung");
    strcpy(m.AToko[18],"Jl Barisan Banteng No 20 f");
    m.Harga[18]=20000;

    strcpy(m.nama[19],"Soda Gembira");
    strcpy(m.kategori[19],"Minuman");
    strcpy(m.Deskripsi[19],"Soda campur susu");
    strcpy(m.Toko[19],"Kedai Barba Bandung");
    strcpy(m.AToko[19],"Jl Barisan Banteng No 20 f");
    m.Harga[19]=11000;

    strcpy(m.nama[20],"Kelapa Susu Manis");
    strcpy(m.kategori[20],"Minuman");
    strcpy(m.Deskripsi[20],"Kelapa yang tidak biasa");
    strcpy(m.Toko[20],"Kedai Barba Bandung");
    strcpy(m.AToko[20],"Jl Barisan Banteng No 20 f");
    m.Harga[20]=13000;

    /*
    strcpy(m.nama[21],"Seblak Mie Telur");
    strcpy(m.kategori[21],"Makanan");
    strcpy(m.Deskripsi[21],"Kerupuk, Telur, Sosis, Batagor, dll");
    strcpy(m.Toko[21],"Waroeng Seblak Bandung");
    strcpy(m.AToko[21],"Jl Bogongsoang Sukapura No 24 q");
    m.Harga[21]=10000;
    */
}

class user
{
public:
    char nama[100];
    void isi()
    {
        strcpy(nama,"Mr Fergusso");
        int z=100;
    }
};

class theme
{
public:
    void logo();
    void isimakanan();
    void body();
    void pil_menu();
    void isi_menu();
    int keluar();
    void wishlist();
    void l_wishlist();
    void keranjang();
    void l_keranjang();
    void l_k_m();
    void l_k_p();
    void pembayaran();
};

void theme::logo()
{
    cout << "\t\t\t\t********     *******   ***     ***   ****"<<endl;
    cout << "\t\t\t\t********     *******  *****   *****  ** **"<<endl;
    cout << "\t\t\t\t**           **      **   ** **   ** **  **"<<endl;
    cout << "\t\t\t\t*******  **** *****   **   ** **   ** **   **"<<endl;
    cout << "\t\t\t\t*******  **** *****   **   ** **   ** **   **"<<endl;
    cout << "\t\t\t\t**            **      **   ** **   ** **  **"<<endl;
    cout << "\t\t\t\t**            **       *****   *****  ** **"<<endl;
    cout << "\t\t\t\t**            **        ***     ***   ****"<<endl;
    cout << "\t\t\t\t============================================"<<endl;
    cout << "\t\t\t\t|         WELCOME TO FERGUSSO FOOD         |"<<endl;
    cout << "\t\t\t\t============================================"<<endl;
}

void theme::wishlist()
{
    system("cls");
    ini :
    isi_menu();
    cout << "\t\t\t\t     Masukkan Nomer Menu Makanan= ";
    cin >> detil;
    if(detil>20){
        system("cls");
        cout << "\t\t\t\tHURUF YANG ANDA MASUKAN TIDAK ADA DALAM DAFTAR" << endl;
        goto ini;
    }
    system("cls");
    system("color C0");
    bin=bin+1;
    strcpy(k.nama[bin],m.nama[detil]);
    strcpy(k.kategori[bin],m.kategori[detil]);
    strcpy(k.Deskripsi[bin],m.Deskripsi[detil]);
    strcpy(k.Toko[bin],m.Toko[detil]);
    strcpy(k.AToko[bin],m.AToko[detil]);
    k.Harga[bin]=m.Harga[detil];
    cout << endl << endl << endl << endl << endl << endl << endl  << endl << endl;;
    cout << "\t\t\t\tNAMA        = " << m.nama[detil] << endl;
    cout << "\t\t\t\tDESKRIPSI   = " << m.Deskripsi[detil] << endl;
    cout << "\t\t\t\tKATEGORI    = " << m.kategori[detil] << endl;
    cout << "\t\t\t\tTOKO        = " << m.Toko[detil] << endl;
    cout << "\t\t\t\tALAMAT TOKO = " << m.AToko[detil] << endl;
    cout << "\t\t\t\t======================================================" << endl;
    cout << "\t\t\t\t=         BERHASIL DITAMBAHKAN KE WISHLIST           =" << endl;
    cout << "\t\t\t\t======================================================" << endl;
    cout << "\t\t\t\t            Press any key to back...";
    getch();
    system("cls");
    system("color f0");
    body();
}

void theme::body()
{
    isi_menu();
    pil_menu();
    switch(menupil)
    {
    case 'p' :
        {
            a=a-2;
            z=z-2;
            if(a<=0)
            {
                a=19;
                z=20;
            }
            system("cls");
            body();
            break;
        }
    case 'n' :
        {
            a=a+2;
            z=z+2;
            if(a>20)
            {
                a=1;
                z=2;
            }
            system("cls");
            body();
            break;
        }
    case 'd' :
        {
            system("cls");
            ini :
            isi_menu();
            cout << "\t\t\t\t     Masukkan Nomer Menu Makanan= ";
            cin >> detil;
            if(detil>20){
                system("cls");
                cout << "\t\t\t\tHURUF YANG ANDA MASUKAN TIDAK ADA DALAM DAFTAR" << endl;
                goto ini;
            }
            system("cls");
            system("color b0");
            cout << endl << endl << endl << endl << endl << endl << endl  << endl << endl;;
            cout << "\t\t\t\tNAMA        = " << m.nama[detil] << endl;
            cout << "\t\t\t\tDESKRIPSI   = " << m.Deskripsi[detil] << endl;
            cout << "\t\t\t\tKATEGORI    = " << m.kategori[detil] << endl;
            cout << "\t\t\t\tTOKO        = " << m.Toko[detil] << endl;
            cout << "\t\t\t\tALAMAT TOKO = " << m.AToko[detil] << endl;
            cout << "\t\t\t\t            ==========================================" << endl;
            cout << "\t\t\t\t            Press any key to back...";
            getch();
            system("cls");
            system("color f0");
            body();
            break;
        }

    case 'w' :
        {
            wishlist();
            break;
        }

    case 'k' :
        {
            keranjang();
            break;
        }

    case 'e' :
        {
            keluar();
            break;
        }
    case 'r' :
        {
            l_wishlist();
            break;
        }

    case 'q' :
        {
            l_keranjang();
            break;
        }
    default :
        {
            system("cls");
            cout << "\t\t\t\tHURUF YANG ANDA MASUKAN TIDAK ADA DALAM DAFTAR" << endl;
            body();
        }
    }
}

void theme::pembayaran()
{
    int i,total=0, ongkir;
    system("cls");
    system("color e0");
    cout << "\t\t==================================================================================" << endl;
    cout << "\t\t=                                  PEMBAYARAN                                    =" << endl;
    cout << "\t\t==================================================================================" << endl;
    for(i=1;i<=ker;i++){
        cout << "\t\t\t\t" << w.nama[i] << endl << "\t\t\t\t\t\t\t\t\t Rp. " << w.Harga[i] <<endl;
        total=total+w.Harga[i];
    }
    cout << "\t\t                                                       ==============  +" << endl;
    cout << "\t\t\t\t\t\t\t\t\t Rp. " << total << endl;
    cout << "\t\t\t\tOngkos Kirim" << endl;
    ongkir=((total/1000)/4)*1000;
    cout << "\t\t\t\t\t\t\t\t\t Rp. " << ongkir <<endl;
    cout << "\t\t                                                       ==============  +" << endl;
    total=total+ongkir;
    cout << "\t\t\t\t\t\t\t\t\t Rp. " << total << endl;
    cout << "\t\t\t\t            Press any key to continue...";
    getch();
    system("cls");
    cout << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t   ********     *******   ***     ***   ****"<<endl;
    cout << "\t\t\t\t   ********     *******  *****   *****  ** **"<<endl;
    cout << "\t\t\t\t   **           **      **   ** **   ** **  **"<<endl;
    cout << "\t\t\t\t   *******  **** *****   **   ** **   ** **   **"<<endl;
    cout << "\t\t\t\t   *******  **** *****   **   ** **   ** **   **"<<endl;
    cout << "\t\t\t\t   **            **      **   ** **   ** **  **"<<endl;
    cout << "\t\t\t\t   **            **       *****   *****  ** **"<<endl;
    cout << "\t\t\t\t   **            **        ***     ***   ****"<<endl;
    cout << "\t\t\t\t==================================================="<<endl;
    cout << "\t\t\t\t=          Terima Kasih Mr. Fergusso               ="<<endl;
    cout << "\t\t\t\t===================================================="<<endl;
    cout << "\t\t\t\t= MAKANAN ANDA AKAN SEGERA DIANTAR. MOHON BERSABAR ="<<endl;
    cout << "\t\t\t\t===================================================="<<endl;
    cout << "\t\t\t\t            Press any key to back...";
    getch();
    system("cls");
    system("color f0");
    body();
}

void theme::l_keranjang()
{
    l_k_m();
    l_k_p();
}

void theme::l_k_m()
{
    int i;
    system("cls");
    system("color e0");
    cout << "\t\t==================================================================================" << endl;
    cout << "\t\t=                                   KERANJANG                                    =" << endl;
    cout << "\t\t==================================================================================" << endl;
    if(ker==0)cout << "\t\t\t\tBELUM ADA MAKANAN YANG MASUK KERANJANG" << endl;
    for (i=1;i<=ker;i++){
        cout << "\t\t\t===== | " << w.nama[i] <<"\n\t\t\t= "<< i << " = |\n\t\t\t===== | " << w.Deskripsi[i] << "\n\t\t\t      | Rp " << w.Harga[i] << "\n\t\t\t       ===================================================" << endl;
    }
}

void theme::l_k_p()
{
    cout << "\t\t\t\t     =======================================" << endl;
    cout << "\t\t\t\t     =               PILIHAN               =" << endl;
    cout << "\t\t\t\t     =======================================" << endl;
    cout << "\t\t\t\t     = Press (p) to Lanjut ke Pembayaran   =" << endl;
    cout << "\t\t\t\t     = Press (b) to back                   =" << endl;
    cout << "\t\t\t\t     =======================================" << endl;
    cout << "\t\t\t\t     Masukkan Huruf Pilihan Anda: ";
    menupil=getch();
    switch(menupil)
    {
    case 'p' :
        {
            pembayaran();
            break;
        }
    case 'b' :
        {
            system("cls");
            system("color f0");
            body();
            break;
        }
    default :
        {
            system("cls");
            l_keranjang();
        }
    }
}

void theme::keranjang()
{
    system("cls");
    ini :
    isi_menu();
    cout << "\t\t\t\t     Masukkan Nomer Menu Makanan= ";
    cin >> detil;
    if(detil>20){
        system("cls");
        cout << "\t\t\t\tHURUF YANG ANDA MASUKAN TIDAK ADA DALAM DAFTAR" << endl;
        goto ini;
    }
    system("cls");
    system("color e0");
    ker=ker+1;
    strcpy(w.nama[ker],m.nama[detil]);
    strcpy(w.kategori[ker],m.kategori[detil]);
    strcpy(w.Deskripsi[ker],m.Deskripsi[detil]);
    strcpy(w.Toko[ker],m.Toko[detil]);
    strcpy(w.AToko[ker],m.AToko[detil]);
    w.Harga[ker]=m.Harga[detil];
    cout << endl << endl << endl << endl << endl << endl << endl  << endl << endl;;
    cout << "\t\t\t\tNAMA        = " << w.nama[ker] << endl;
    cout << "\t\t\t\tDESKRIPSI   = " << w.Deskripsi[ker] << endl;
    cout << "\t\t\t\tKATEGORI    = " << w.kategori[ker] << endl;
    cout << "\t\t\t\tTOKO        = " << w.Toko[ker] << endl;
    cout << "\t\t\t\tALAMAT TOKO = " << w.AToko[ker] << endl;
    cout << "\t\t\t\t======================================================" << endl;
    cout << "\t\t\t\t=         BERHASIL DITAMBAHKAN KE KERANJANG          =" << endl;
    cout << "\t\t\t\t======================================================" << endl;
    cout << "\t\t\t\t            Press any key to back...";
    getch();
    system("cls");
    system("color f0");
    body();
}

void theme::l_wishlist()
{
    int i;
    system("cls");
    ini :
    system("color C0");
    cout << "\t\t==================================================================================" << endl;
    cout << "\t\t=                                DAFTAR WISHLIST                                 =" << endl;
    cout << "\t\t==================================================================================" << endl;
    if(bin==0)cout << "\t\t\t\tBELUM ADA MAKANAN YANG MASUK DAFTAR WISHLIST" << endl;
    for (i=1;i<=bin;i++){
        cout << "\t\t\t===== | " << k.nama[i] <<"\n\t\t\t= "<< i << " = |\n\t\t\t===== | " << k.Deskripsi[i] << "\n\t\t\t      | Rp " << k.Harga[i] << "\n\t\t\t       ===================================================" << endl;
    }
    cout << "\t\t\t\t     =======================================" << endl;
    cout << "\t\t\t\t     =               PILIHAN               =" << endl;
    cout << "\t\t\t\t     =======================================" << endl;
    cout << "\t\t\t\t     = Press (k) to Tambahkan ke Keranjang =" << endl;
    cout << "\t\t\t\t     = Press (b) to back                   =" << endl;
    cout << "\t\t\t\t     =======================================" << endl;
    cout << "\t\t\t\t     Masukkan Huruf Pilihan Anda: ";
    menupil=getch();
    switch(menupil)
    {
    case 'k' :
        {
            int i;
            system("cls");
            ya :
            system("color C0");
            cout << "\t\t==================================================================================" << endl;
            cout << "\t\t=                                DAFTAR WISHLIST                                 =" << endl;
            cout << "\t\t==================================================================================" << endl;
            if(bin==0)cout << "\t\t\t\tBELUM ADA MAKANAN YANG MASUK DAFTAR WISHLIST" << endl;
            for (i=1;i<=bin;i++){
                cout << "\t\t\t===== | " << k.nama[i] <<"\n\t\t\t= "<< i << " = |\n\t\t\t===== | " << k.Deskripsi[i] << "\n\t\t\t      | Rp " << k.Harga[i] << "\n\t\t\t       ===================================================" << endl;
            }
            cout << "\t\t\t\t     Masukkan Nomer Menu Makanan= ";
            cin >> detil;
            if(detil>bin){
                system("cls");
                cout << "\t\t\t\tHURUF YANG ANDA MASUKAN TIDAK ADA DALAM DAFTAR" << endl;
                goto ya;
            }
            system("cls");
            system("color e0");
            ker=ker+1;
            strcpy(w.nama[ker],k.nama[detil]);
            strcpy(w.kategori[ker],k.kategori[detil]);
            strcpy(w.Deskripsi[ker],k.Deskripsi[detil]);
            strcpy(w.Toko[ker],k.Toko[detil]);
            strcpy(w.AToko[ker],k.AToko[detil]);
            w.Harga[ker]=k.Harga[detil];
            cout << endl << endl << endl << endl << endl << endl << endl  << endl << endl;;
            cout << "\t\t\t\tNAMA        = " << w.nama[ker] << endl;
            cout << "\t\t\t\tDESKRIPSI   = " << w.Deskripsi[ker] << endl;
            cout << "\t\t\t\tKATEGORI    = " << w.kategori[ker] << endl;
            cout << "\t\t\t\tTOKO        = " << w.Toko[ker] << endl;
            cout << "\t\t\t\tALAMAT TOKO = " << w.AToko[ker] << endl;
            cout << "\t\t\t\t======================================================" << endl;
            cout << "\t\t\t\t=         BERHASIL DITAMBAHKAN KE KERANJANG          =" << endl;
            cout << "\t\t\t\t======================================================" << endl;
            cout << "\t\t\t\t            Press any key to back...";
            getch();
            system("cls");
            system("color c0");
            l_wishlist();
            break;
        }
    case 'b' :
        {
            system("cls");
            system("color f0");
            body();
            break;
        }
    default :
        {
            system("cls");
            cout << "\t\t\t\tHURUF YANG ANDA MASUKAN TIDAK ADA DALAM DAFTAR" << endl;
            goto ini;
        }
    }

}

int theme::keluar()
{
    system("cls");
    system("color 0f");
    cout << "THANKS FOR USING" << endl;
    cout << "Created By:" << endl;
    cout << "1. Muhammad Rifqi Firdaus" << endl;
    cout << "2. Hafiyyan 'Abdul 'Aziz" << endl;
    cout << "3. Rizka Shinta Wulandari" << endl;
    cout << "4. Rizky Mahdavikia" << endl;
    cout << "5. LM Al Fachril" << endl;
    return 0;
}


void theme::isi_menu()
{
    int i;
    cout << "=====" << endl;
    cout << "= " << ker << " ="<< endl;
    cout << "=====" << endl;
    cout << "\t\t==================================================================================" << endl;
    cout << "\t\t=                              DAFTAR MENU MAKANAN                               =" << endl;
    cout << "\t\t==================================================================================" << endl;
    for (i=a;i<=z;i++){
        cout << "\t\t\t===== | " << m.nama[i] <<"\n\t\t\t= "<< i << " = |\n\t\t\t===== | " << m.Deskripsi[i] << "\n\t\t\t      | Rp " << m.Harga[i] << "\n\t\t\t       ===================================================" << endl;
    }
}

void theme::pil_menu()
{
    cout << "\t\t\t\t     =======================================" << endl;
    cout << "\t\t\t\t     =               PILIHAN               =" << endl;
    cout << "\t\t\t\t     =======================================" << endl;
    cout << "\t\t\t\t     = Press (n) to next Menu              =" << endl;
    cout << "\t\t\t\t     = Press (p) to Previous Menu          =" << endl;
    cout << "\t\t\t\t     = Press (d) to Detil Menu             =" << endl;
    cout << "\t\t\t\t     = Press (k) to Tambahkan ke Keranjang =" << endl;
    cout << "\t\t\t\t     = Press (q) to Lihat keranjang & bayar=" << endl;
    cout << "\t\t\t\t     = Press (w) to Tambahkan ke Wishlist  =" << endl;
    cout << "\t\t\t\t     = Press (r) to Lihat Wishlist         =" << endl;
    cout << "\t\t\t\t     = Press (e) to Exit                   =" << endl;
    cout << "\t\t\t\t     =======================================" << endl;
    cout << "\t\t\t\t     Masukkan Huruf Pilihan Anda: ";
    menupil=getch();
}

void waktu(){
    const char *const HARI[7]={"Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu"};
const char *const BULAN[12]={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
    time_t t;
    struct tm now;
    t = time(NULL);
    now = *localtime(&t);
    cout<<HARI[now.tm_wday]<<"-"<<now.tm_mday<<"-"<<BULAN[now.tm_mon]<<"-"<<now.tm_year+1900<<", "<<now.tm_hour<<":"<<now.tm_min<<":"<<now.tm_sec<<endl;
}


int main()
{
    system("color f0");
    user u;
    u.isi();
    theme t;
    isimakanan();
    cout << endl << endl << endl << endl << endl << endl;
    t.logo();
    cout << "\t\t\t\t| Hi: "<<u.nama<<endl;
    cout << "\t\t\t\t| ";waktu();
    cout << "\t\t\t\t============================================"<<endl;
    cout << "\t\t\t\tPress any key to main menu...";
    getch();/**<  */
    system("cls");
    t.body();
    return 0;
}
