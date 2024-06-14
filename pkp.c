#include "identifiers.c"
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
    int main(){
        switch (status){
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
    }