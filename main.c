#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu();
void biodata();
void hlsawah();
void hrfvokal();

int main()
{
    char pilih,statusloop=1;
    biodata();
    do
    {
        menu();
        scanf("%c",&pilih);
        switch(pilih)
        {
            case '1':biodata();
                    break;
            case '2':hlsawah();
                    break;
            case '3':hrfvokal();
                    break;
            case '4':printf("Yakin Keluar? y/n");
                     if(getch()=='y')
                        statusloop=0;
                     break;
        }}while(statusloop);
    return 0;
}
