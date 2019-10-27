#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nama[20];
    int hr,bln,thn,nik, pil,jenis;
    fflush(stdin);
    printf("Nama Pembeli: ");
    gets(nama);
    fflush(stdin);
    printf("NIK: "); scanf("%d",&nik);
    fflush(stdin);
    printf("Tanggal Pembelian(HH BB TTTT): "); scanf("%d-%d-%d",&hr,&bln,&thn);
    fflush(stdin);

    printf("Pilihan motor: \n");
    printf("1.Bebek\n");
    printf("2.Matic\n");
    printf("3.Kopling\n");
    printf("Masukkan pilihanmu : "); scanf("%d",&pil);

    if(pil==1)
     {
          printf("1.Jupiter z110\n");
          printf("2.Vega r\n");
          printf("3.Force\n");
          printf("Masukkan pilihanmu : "); scanf("%d",&jenis);
          printf("\n");

          if (jenis==1)
          {
               printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
               printf("Nama : %s\n",nama);
               printf("NIK : %d\n",nik);
               printf("Tanggal Pembelian : %d-%d-%d(Hari ini)\n", hr, bln, thn);
               printf("Motor yang anda beli Jupiter z 110\n");
               printf("Harga 17.000.000IDR\n");
               printf("Silahkan bayar di Bag.Administrasi...\n");
               printf("###############Terima Kasih###############");

          }
          if (jenis==2)
          {
               printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
               printf("Nama : %s\n",nama);
               printf("NIK : %d\n",nik);
               printf("Tanggal Pembelian : %d-%d-%d(Hari ini)\n", hr, bln, thn);
               printf("Motor yang anda beli Vega r\n");
               printf("Harga 16.500.000IDR\n");
               printf("Silahkan bayar di Bag.Administrasi...\n");
               printf("###############Terima Kasih###############");
          }
          if (jenis==3)
          {
               printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
               printf("Nama : %s\n",nama);
               printf("NIK : %d\n",nik);
               printf("Tanggal Pembelian : %d-%d-%d(Hari ini)\n", hr, bln, thn);
               printf("Motor yang anda beli force\n");
               printf("Harga 16.500.000IDR\n");
               printf("Silahkan bayar di Bag.Administrasi...\n");
               printf("###############Terima Kasih###############");
          }

    }
     if(pil==2)
    {
           printf("1.Mio\n");
           printf("2.Soul gt r\n");
           printf("3.Aerox155\n");
           printf("4.Nmax\n");
           printf("5.xmax\n");
           printf("Masukkan pilihanmu : "); scanf("%d",&jenis);
           printf("\n");

           if(jenis==1)
           {
                printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                printf("Nama : %s\n",nama);
                printf("NIK : %d\n",nik);
                printf("Tanggal Pembelian : %d-%d-%d(Hari ini)\n", hr, bln, thn);
                printf("Motor yang anda beli Mio\n");
                printf("Harga 15.200.000IDR\n");
                printf("Silahkan bayar di Bag.Administrasi...\n");
                printf("###############Terima Kasih###############");

           }
           if (jenis==2)
           {
                printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                printf("Nama : %s\n",nama);
                printf("NIK : %d\n",nik);
                printf("Tanggal Pembelian : %d-%d-%d(Hari ini)\n", hr, bln, thn);
                printf("Motor yang anda beli soul gt\n");
                printf("Harga 17.200.000IDR\n");
                printf("Silahkan bayar di Bag.Administrasi...\n");
                printf("###############Terima Kasih###############");
           }

           if (jenis==3)
           {
                printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                printf("Nama : %s\n",nama);
                printf("NIK : %d\n",nik);
                printf("Tanggal Pembelian : %d-%d-%d(hari ini)\n", hr, bln, thn);
                printf("Motor yang anda beli Aerox 155\n");
                printf("Harga 28.000.000IDR\n");
                printf("Silahkan bayar di Bag.Administrasi...\n");
                printf("###############Terima Kasih###############");
           }
           if (jenis==4)
           {
                 printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                 printf("Nama : %s\n",nama);
                 printf("NIK : %d\n",nik);
                 printf("Tanggal Pembelian : %d-%d-%d(hari ini)\n", hr, bln, thn);
                 printf("Motor yang anda beli Nmax\n");
                 printf("Harga 28.500.000IDR\n");
                 printf("Silahkan bayar di Bag.Administrasi...\n");
                 printf("###############Terima Kasih###############");
           }
           if (jenis==5)
           {
                 printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                 printf("Nama : %s\n",nama);
                 printf("NIK : %d\n",nik);
                 printf("Tanggal Pembelian : %d-%d-%d(hari ini)\n", hr, bln, thn);
                 printf("Motor yang anda beli Xmax\n");
                 printf("Harga 56.700.000IDR\n");
                 printf("Silahkan bayar di Bag.Administrasi...\n");
                 printf("###############Terima Kasih###############");
           }

    }
    if(pil==3)
    {
          printf("1.Jupiter mx\n");
          printf("2.Mx king\n");
          printf("3.Vixion\n");
          printf("4.Byson\n");
          printf("5.R15\n");
          printf("6.R25\n");
          printf("Masukkan pilihanmu : "); scanf("%d",&jenis);
          printf("\n");


             if(jenis==1)
             {
                     printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                     printf("Nama : %s\n",nama);
                     printf("NIK : %d\n",nik);
                     printf("Tanggal Pembelian : %d-%d-%d(hari ini)\n", hr, bln, thn);
                     printf("Motor yang anda beli Jupiter mx\n");
                     printf("Harga 18.150.000IDR\n");
                     printf("Silahkan bayar di Bag.Administrasi...\n");
                     printf("###############Terima Kasih###############");
             }
             if(jenis==2)
             {
                     printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                     printf("Nama : %s\n",nama);
                     printf("NIK : %d\n",nik);
                     printf("Tanggal Pembelian : %d-%d-%d(hari ini)\n", hr, bln, thn);
                     printf("Motor yang anda beli Mx king\n");
                     printf("Harga 23.000.000IDR\n");
                     printf("Silahkan bayar di Bag.Administrasi...\n");
                     printf("###############Terima Kasih###############");
              }
              if(jenis==3)
              {
                     printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                     printf("Nama : %s\n",nama);
                     printf("NIK : %d\n",nik);
                     printf("Tanggal Pembelian : %d-%d-%d(hari ini)\n", hr, bln, thn);
                     printf("Motor yang anda beli Vixion\n");
                     printf("Harga 28.500.000IDR\n");
                     printf("Silahkan bayar di Bag.Administrasi...\n");
                     printf("###############Terima Kasih###############");
              }
              if(jenis==4)
              {
                      printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                      printf("Nama : %s\n",nama);
                      printf("NIK : %d\n",nik);
                      printf("Tanggal Pembelian : %d-%d-%d(hari ini)\n", hr, bln, thn);
                      printf("Motor yang anda beli Byson\n");
                      printf("Harga 23.750.000IDR\n");
                      printf("Silahkan bayar di Bag.Administrasi...\n");
                      printf("###############Terima Kasih###############");
              }
              if(jenis==5)
              {

                       printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                       printf("Nama : %s\n",nama);
                       printf("NIK : %d\n",nik);
                       printf("Tanggal Pembelian : %d-%d-%d(hari ini)\n", hr, bln, thn);
                       printf("Motor yang anda beli R15\n");
                       printf("Harga 37.300.000IDR\n");
                       printf("Silahkan bayar di Bag.Administrasi...\n");
                       printf("###############Terima Kasih###############");
              }
              if(jenis==6)
              {

                       printf("*****SELAMAT PILIHAN ANDA TELAH KAMI TERIMA*****\n");
                       printf("Nama : %s\n",nama);
                       printf("NIK : %d\n",nik);
                       printf("Tanggal Pembelian : %d-%d-%d(hari ini)\n", hr, bln, thn);
                       printf("Motor yang anda beli R25\n");
                       printf("Harga 56.800.000IDR\n");
                       printf("Silahkan bayar di Bag.Administrasi...\n");
                       printf("###############Terima Kasih###############");
               }


     }

    return 0;
}
