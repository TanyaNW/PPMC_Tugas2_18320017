#include<stdio.h>

char bandingkanArray(int a[], int b[], int batas)
{
    int i = 0;
    for (i=0; i<batas; i++)
    {
        if (a[i] != b[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

char buatArray(int a[], int b[] int batas)
{
    int i = 0;
    for (i=0; i<batas; i++)
    {
        printf("Masukkan waktu kedatangan : \n");
        scanf("%d", &a[i]);
        printf("Masukkan waktu eksekusi : \n");
        scanf("%d", &b[i]);
    }
}

char printArray(int a[], int batas)
{
    int i = 0;
    for (i=0; i<batas, i++)
    {
        printf("%d", a[i])
    }
    printf("\n")
}

int
main()
{
    int n;
    printf("Masukkan jumlah proses yang akan dikerjakan : \n");
    scanf("%d", &n);

    int arrayMasuk[n];
    int arrayEksekusi[n];
    int arrayAntrian[n];

    buatarray(arrayMasuk, arrayksekusi, n);

    int quantum;
    printf("masukkan waktu quantum : \n");
    scanf("%d", &quantum);

    for (bandingkanArray(arrayEksekusi, arrayAntrian, n)==0)
    {
        //isi prosesnya (?)
    }

    return(0);
}
