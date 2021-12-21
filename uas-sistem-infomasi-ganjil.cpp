/*remake_uas_semester1
ini adalah remake uas semester1*/

#include <iostream>
using namespace std;

int main()
{
    int saldo = 200000;
    int tarik, transfer, password, tambah, menu, hasil;

    std::cout << "selamat datang mamang" << std::endl;

    while (true)
    {
        std::cout << "masukan password : ";std::cin >>password;
        if (password == 12345)
        {
            false;
            while (true)
            {
            
            std::cout << "Saldo kamu sebesar : " << saldo << endl << std::endl;
            std::cout << "masukan menu \n 1. Transfer          2. tambah \n 3. Tarik             4. Keluar \n" << endl;
            std::cout << "Masukan pilihan menu : "; std::cin >> menu;
            
            if (menu == 1)
            {
                std::cout << "saldo kamu sebesar = "<< saldo << std::endl;
                std::cout << "berapa yang ingin anda transfer = ";std::cin >> transfer;
                if (transfer > saldo)
                {
                    std::cout << "anda gagal" << std::endl;
                }else
                {
                    std::cout << "anda mentransfer sebesar" << transfer << std::endl;
                hasil = saldo - transfer;
                std::cout << "sisa saldo kamu sebesar " << hasil << endl << std::endl;
                true;
                }
                
            }else if (menu == 2)
            {
                std::cout << "saldo kamu sebesar = "<< saldo << std::endl;
                std::cout << "berapa yang ingin anda tambah = ";std::cin >> tambah;
                if (tambah <= 0)
                {
                    std::cout << "kalo gak punya uang, jangan sok soan nambah saldo." << std::endl;
                    hasil = saldo;
                }else
                {
                    std::cout << "anda tambah sebesar" << tambah << std::endl;
                hasil = saldo + tambah;
                std::cout << "sisa saldo kamu sebesar " << hasil << endl << std::endl;
                true;
                }
                
            }else if (menu == 3)
            {
                std::cout << "saldo kamu sebesar = "<< saldo << std::endl;
                std::cout << "berapa yang ingin anda tarik = ";std::cin >> tarik;
                if (transfer > saldo)
                {
                    std::cout << "anda gagal" << std::endl;
                }else
                {
                    std::cout << "anda tarik sebesar" << tarik << std::endl;
                hasil = saldo - tarik;
                std::cout << "sisa saldo kamu sebesar " << hasil << endl << endl;
                true;
                }
                
            }else if (menu == 4)
            {
                std::cout << "kita akan kembali"<< endl << std::endl;
                break;
            }else
            {
                std::cout << "yang anda masukan salah" << std::endl;
                hasil = saldo;
                true;
            }
            saldo = hasil;
            }break;
        }else
        {
            true;
            cout << "masukan yang benar \n";
        }
    }
    return 0;
}
