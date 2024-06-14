#include "identifiers.c"
    void welcome(){
        printf("KALKULATOR PERHITUNGAN PKP KARYAWAN\n");
        printf("Aplikasi ini berfungsi sebagai alat bantu perhitungan pajak sesuai Undang-Undang Harmonisasi Perpajakan No. 7 Tahun 2021\n");
    }

    void data_User(){
        printf("Masukkan data diri anda berikut ini sesuai dengan kartu Identitas anda!\n nama: ");
        fgets(name, 50, stdin);
        printf("Input status anda dengan menginput nomor seperti yang tertera dibawah ini\n 1. Tidak Kawin\n 2. Kawin Pekerja Tunggal\n 3. Kawin Suami dan Istri Bekerja\n status: ");
        scanf("%d", &status);
        printf("Masukkan jumlah tanggungan anda!\n Yang termasuk tanggungan meliputi keluarga sedarah (orang tua kandung/saudara kandung/anak kandung/anak angkat)\n Yang termasuk keluarga semenda (mertua/anak tiri/adik ipar)\n jumlah tanggungan: ");
        scanf("%d", &tanggungan_num);
        printf("Masukkan penghasilan perbulan anda (Jika suami dan istri bekerja maka total keduanya harus dijumlahkan!)");
        scanf("%f",&income_per_bulan);

        income_per_tahun=income_per_bulan*12;
    }

    void pkp_takKawin(){
        if(income_per_tahun<=54000000){
            pkp=0;
        }   else{
                switch(tanggungan_num){
                    case 0:
                        ptkp=54000000;
                        pkp=income_per_tahun-ptkp;
                        printf("PKP: %.2f",pkp);
                        break;
                    case 1:
                        ptkp=58500000;
                        pkp=income_per_tahun-ptkp;
                        printf("PKP: %.2f",pkp);
                        break;
                    case 2:
                        ptkp=63000000;
                        pkp=income_per_tahun-ptkp;
                        printf("PKP: %.2f",pkp);
                        break;
                    case 3:
                        ptkp=67500000;
                        pkp=income_per_tahun-ptkp;
                        printf("PKP: %.2f",pkp);
                        break;
            }
        }
    }

    void pkp_Kawin(){
        if(income_per_tahun<=58500000){
            pkp=0;
        }   else{
                switch(tanggungan_num){
                    case 0:
                        ptkp=58500000;
                        pkp=income_per_tahun-ptkp;
                        printf("PKP: %.2f",pkp);
                        break;
                    case 1:
                        ptkp=63000000;
                        pkp=income_per_tahun-ptkp;
                        printf("PKP: %.2f",pkp);
                        break;
                    case 2:
                        ptkp=67500000;
                        pkp=income_per_tahun-ptkp;
                        printf("PKP: %.2f",pkp);
                        break;
                    case 3:
                        ptkp=72000000;
                        pkp=income_per_tahun-ptkp;
                        printf("PKP: %.2f",pkp);
                        break;
                }
            }
    }

    void pkp_bekerjaSuIs(){
        if(income_per_tahun<=112500000){
            pkp=0;
        }   else{
        switch(tanggungan_num){
            case 0:
                ptkp=112500000;
                pkp=income_per_tahun-ptkp;
                printf("PKP: %.2f",pkp);
                break;
            case 1:
                ptkp=117000000;
                pkp=income_per_tahun-ptkp;
                printf("PKP: %.2f",pkp);
                break;
            case 2:
                ptkp=121500000;
                pkp=income_per_tahun-ptkp;
                printf("PKP: %.2f",pkp);
                break;
            case 3:
                ptkp=126000000;
                pkp=income_per_tahun-ptkp;
                printf("PKP: %.2f",pkp);
                break;
        }
    }
    }
    
    void end(){
        printf("Nama : %c\n",name);
        printf("Status : %d\n",status);
        printf("Penghasilan per bulan: %.2f\n",income_per_bulan );
        printf("Penghasilan per tahun: %.2f\n",income_per_tahun);
        printf("PKP : %.2f\n",pkp);

    }

    int main(){
        welcome();
        data_User();
        switch(status){
            case 1:
                pkp_takKawin();
                break;
            case 2:
                pkp_Kawin();
                break;
            case 3:
                pkp_bekerjaSuIs();
                break;
        }
        end();
    }