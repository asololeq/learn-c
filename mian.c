#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu()
{
    system("cls");
    puts("MENU UTAMA");
    puts("1. Biodata");
    puts("2. Hitung Luas Sawah");
    puts("3. Jumlah Huruf Vocal");
    puts("4. Keluar");
    printf("Pilihan Anda Nomor = ");
}

void biodata()
{
system("cls");
puts("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\r");
puts("\xBA   UAS Algoritma dan Pemrograman  \xBA\r");
printf("\xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9\r\n");
puts("\xBA     Solagratia P. Banjarnahor    \xBA\r");
puts("\xBA          NIM C030325103          \xBA\r");
printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\r\n");
puts("Tekan enter untuk melanjutkan...");
getch();
}
void hlsawah()
{
    int p,l,luas,lsawah;
    do
    {
        system("cls");
        puts("MENGHITUNG LUAS SAWAH DALAM METER");
        printf("Masukkan Panjang Sawah = ");
        scanf("%i",&p);
        printf("Masukkkan Lebar Sawah  = ");
        scanf("%i",&l);
        if((p>0)&&(l>0)){
            puts("PERHITUNGAN DALAM PROSES");
            luas=p*l;
            if(luas>=10000)
            {
                lsawah=luas/10000;
                printf("Luas Sawah = %i hektare",lsawah);
            }
            else
            {
                lsawah=luas;
                printf("Luas Sawah = %i m\xFD",lsawah);
            }
            puts("\nAnda ingin mengulang? y/n\n");}
        else{
            puts("PERHITUNGAN ERORR");

        puts("Tekan Enter untuk Melanjutkan...\n");
        }
    }while((getch()!='n')||(getch()=='y'));
}

void hrfvokal()
{
    char text[100];
    int i, kata=0;
    do
    {
        system("cls");
        printf("Masukkan Kalimat = \n");
        getchar();
        fgets(text,sizeof(text),stdin);
        for(i=0;text[i]!='\0';i++)
        {
            if (text[i] == 'a' || text[i] == 'A' ||
                text[i] == 'i' || text[i] == 'I' ||
                text[i] == 'u' || text[i] == 'U' ||
                text[i] == 'e' || text[i] == 'E' ||
                text[i] == 'o' || text[i] == 'O')
            {
                kata++;
            }
        }
        puts("Hasil Perhitungan");
        printf("Jumlah Huruf Vokal   = %i\n",kata);
        puts("Apakah anda ingin mengulang? y/n\n");
    }while(getch()=='y');
}

/*#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu()
{
    system("cls");
    puts("MENU UTAMA");
    puts("1. Biodata");
    puts("2. Hitung Luas Sawah");
    puts("3. Jumlah Huruf Vocal");
    puts("4. Keluar");
    printf("Pilihan Anda Nomor = ");
}

void biodata()
{
    puts("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\r");
    puts("\xBA Soal UTS Algoritma dan Pemograman\xBA\r");
    printf("\xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9\r\n");
    puts("\xBA     Solagratia P. Banjarnahor    \xBA\r");
    puts("\xBA          NIM C030325103          \xBA\r");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\r\n");
    puts("Tekan enter untuk melanjutkan");
    getch();
}

void hlsawah()
{
    system("cls");
    int p,l,luas,lsawah;
    do
    {
        puts("MENGHITUNG LUAS SAWAH DALAM METER");
        printf("Masukkan Panjang Sawah = ");
        scanf("%i",&p);
        printf("Masukkkan Lebar Sawah  = ");
        scanf("%i",&l);
        if(p<0&&l<0)
            puts("PERHITUNGAN ERORR");
            puts("Tekan Enter untuk Melanjutkan\n");
            getch();

        puts("MENGHITUNG LUAS SAWAH DALAM METER");
        printf("Masukkan Panjang Sawah = ");
        scanf("%i",&p);
        printf("Masukkkan Lebar Sawah  = ");
        scanf("%i",&l);
        luas=p*l;
        if(luas>=10000)
        {
            lsawah=luas/10000;
            printf("Luas Sawah = %i hektare",lsawah);
        }
        else
        {
            lsawah=luas;
            printf("Luas Sawah = %i m\xFD",lsawah);
        }
        puts("\nMau mengulang? y/n\n");
    }while(getch()=='y');




}

void hrfvokal()
{
    char text[50];
    int i, kata=0,spasi=0;

    printf("Masukkan Kalimat = \n");
    fgets(text,sizeof(text),stdin);
    for(i=0;text[i]!='\0';i++)
    {
        spasi++;
        if((i==0&&text[i]=='a'&&text[i]=='i'&&text[i]=='u'&&text[i]=='e'&&text[i]=='o'&&text[i-1]==' '))
        {
            kata++;
        }
    }
    spasi--;

    puts("Hasil Perhitungan");
    printf("Jumlah Huruf Vokal         = %i\n",kata);
}*/




/*#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void intro()
{

}
void biodata()
{
    puts("=======================");
    puts("  Tugas UTS pak Agus");
    puts("Muhammad Samsul Arifin");
    puts("C030325149");
    puts("TI-1E");
    puts("=======================");
    getch();
}
void hitung_luas_sawah()
{
    int p,l,L;
    do{
    puts("========================================================");
    printf("masukan panjang dan lebar sawah. pisah dengan spasi = ");
    scanf("%i %i",&p,&l);
    L=p*l;
    if ( (p>0) && (l>0) )
        puts("kedua input positif");
    else
        puts("ada yang salah");
    printf("Luas dari sawah adalah = %i\n",L);
    puts("========================================================");
    printf("anda ingin mengulang ? y/n\n\n");
    }while(getch()=='y');
    printf("program selesai");
}
void jumlah_huruf_vokal()
{
    char text[200];
    int i, vokal = 0;
    do{
    printf("Masukkan kalimat: ");
    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == 'a' || text[i] == 'A' ||
            text[i] == 'i' || text[i] == 'I' ||
            text[i] == 'u' || text[i] == 'U' ||
            text[i] == 'e' || text[i] == 'E' ||
            text[i] == 'o' || text[i] == 'O') {
            vokal++;
        }
    }
    printf("Jumlah Huruf vokal dari Kata Anda = %d\n", vokal);
    printf("anda ingin mengulang ? y/n\n\n");
     }while(getch()=='y');
    printf("program selesai");
}*/



