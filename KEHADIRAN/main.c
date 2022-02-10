#include <stdio.h>
#include <stdlib.h>

struct mahasiswa
{
    char nama[80];
    int nim;
    float kehadiran;
};

struct mahasiswaAbsen
{
    char *nama[80];
    int *nim;
    float *kehadiran;
};

int jumlah;


int main()
{
    struct mahasiswa kelas[40];
    struct mahasiswaAbsen absen[40];
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);
    int i=0;
    for (i=0; i<jumlah; i++){
        printf("\nMahasiswa %d", (i+1));
        printf("\nNama                  : ");
        scanf("%s", kelas[i].nama);
        printf("\nNIM                   : ");
        scanf("%d", kelas[i].nim);
        printf("\nPersentase kehadiran  : ");
        scanf("%f", kelas[i].kehadiran);
        i++;
        if (kelas[i].kehadiran <= 80.0){
            *absen[i].nama = kelas[i].nama;
        }
    }
    printf("Mahasiswa-mahasiswa dengan kehadiran dibawah 80 persen: \n");
    for (i=0; i<jumlah; i++){
        printf("\nMahasiswa %d %s", (i+1), absen[i].nama);
  }
    return 0;
}
