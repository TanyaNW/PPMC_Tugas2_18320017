#include<stdio.h>
#include<conio.h>

char buatArray(int a[], int b[], int c[], int batas)
{
    int i = 0;
    for (i=0; i<batas; i++)
    {
        printf("Masukkan waktu kedatangan : \n");
        scanf("%d", &a[i]);
        printf("Masukkan waktu eksekusi : \n");
        scanf("%d", &b[i]);
        c[i] = b[i];
    }
}

char printArray(int a[], int batas)
{
    int i = 0;
    printf("\n");
    for (i=0; i<batas; i++)
    {
        printf("P%d = %d\t", i, a[i]);
    }
    printf("\n");
}


void main()
{
    //inisiasi variabel
    int i, N, sum=0, count=0, y, waktuKuantum, waktuTunggu=0, waktuSelesai=0, arrayMasuk[10], arrayEksekusi[10], arrayBantu[10];
    printf("Masukkan jumlah proses yang akan dieksekusi : ");
    scanf("%d", &N);
    y = N; // y adalah jumlah proses yang masih diproses oleh sistem

    // Membuat array yang berisikan waktu kedatangan dan waktu eksekusi tiap proses
    buatArray(arrayMasuk, arrayEksekusi, arrayBantu, N);
    // Menerima waktu kuantum
    printf("Masukkan waktu kuantum : ");
    scanf("%d", &waktuKuantum);

    printf("\n\nProses sedang dieksekusi\n");
    printf("------------------------\n\n");
    for(sum=0, i = 0; y!=0; ) // kondisi loop dan eksekusi proses dalam loop
    {
        if(i==N-1)
        {
            i=0;
        }
        else if(arrayMasuk[i+1]<=sum)
        {
            i++;
        }
        else
        {
            i=0;
        }

        if(arrayBantu[i] <= waktuKuantum && arrayBantu[i] > 0)
        {
            sum = sum + arrayBantu[i];
            arrayBantu[i] = 0;
            count=1;
        }
        else if(arrayBantu[i] > 0)
        {
            arrayBantu[i] = arrayBantu[i] - waktuKuantum;
            sum = sum + waktuKuantum;
        }
        if(arrayBantu[i]==0 && count==1)
        {
            y--; // setelah selesai dieksekusi, dihilangkan
            printf("\n\nProses \t\t Waktu Eksekusi \t\t Waktu Selesai \t\t Waktu tunggu ");
            printf("\nProses[%d] \t\t %d\t\t\t\t %d\t\t\t %d\n\n", i, arrayEksekusi[i], sum, sum-arrayMasuk[i]-arrayEksekusi[i]);
            waktuTunggu = waktuTunggu+sum-arrayMasuk[i]-arrayEksekusi[i];
            waktuSelesai = waktuSelesai+sum;
            count =0;
        }

        printf("\nAntrian Proses\n");
        printArray(arrayBantu, N);
    }
    return(0);
}
