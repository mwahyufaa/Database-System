//Pemasukkan data USER
#include "identifiers.c"

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
    int main(){
        data_User();
        return 0;
    }