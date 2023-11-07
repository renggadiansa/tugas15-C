#include <stdio.h>

//1
#define maks 30

void input (int);
int findmax(int[],int);

//2
#define MAKS 30
//2
void cariRata(float[MAKS][4], char[MAKS][20], int jumData);
void tampilkan(float[MAKS][4], char[MAKS][20], int jumData);


//3
#include <math.h>
#define PHI 3.14f;
//3
float radian(float);
void isiX(float[]);
void tampilkan(float[]);

int main() {

    //1
    int n;

    printf("Masukkan jumlah data = ");
    scanf("%d", &n);
    if(n>maks) {
    }
    input (n);

    //2
    float x[12];
    isiX(x);
    tampilkan(x);

    //2
    float nilai[MAKS][4] =
            {{1, 81, 90, 62}, {2, 50, 83, 87}, {3, 89, 55, 65}, {4, 77, 70, 92}};
    char nama[MAKS][20] =
            {"Ahmad", "Adang", "Deni", "Edy"};
    int jumData = 4;

    tampilkan(nilai, nama, jumData);
    cariRata(nilai, nama, jumData);


    //3
    float x[12];
    isiX(x);
    tampilkan(x);

    return 0;
}

//1
void input (int n){
    int x[maks], max, i;
    for(i=0; i<n; i++){
        printf("Masukkan nilai ke-%d = ", i+1);
        scanf("%d", &x[i]);
    }
    max=findmax(x, n);
    printf("\nNilai terbesar adalah %d", max);
}

int findmax(int x[maks], int n) {
    int i, max;
    for(i=0; i<n; i++){
        if(i==0){
            max=x[0];
        }
        else{
            if(max<=x[i])
                max=x[i];
        }
    }
    return max;
}

//2
void tampilkan(float data[MAKS][4], char nama[MAKS][20], int jumData) {

    int i;
    printf("Daftar Mahasiswa\n");
    printf("---------------------------------------------------------\n");
    printf("| %2s | %10s | %10s | %10s | %10s |\n", "No", "Nama Mhs", "Bahasa", "Matematika", "Digital");
    printf("---------------------------------------------------------\n");
    for (i = 0; i < jumData; i++) {
        printf("| %2d | %10s | %10.0f | %10.0f | %10.0f|\n", (int)data[i][0], nama[i], data[i][1], data[i][2], data[i][3]);
    }
    printf("---------------------------------------------------------\n");
}

void cariRata(float data[MAKS][4], char nama[MAKS][20], int jumData) {

    int i, j;
    float total = 0;
    printf("\nNilai Rata-rata\n");
    printf("-----------------------------------\n");
    printf("| %2s | %10s | %10s |\n", "No", "Nama Mhs", "Rata-rata |");
    printf("-----------------------------------\n");
    for (i = 0; i < jumData; i++) {
        total = 0;
        for (j = 1; j <= 3; j++) {
            total = total + data[i][j];
        }
        printf("| %2d | %10s | %10.2f |\n", (int)data[i][0], nama[i], total / 3);
    }
    printf("-----------------------------------\n");
}


//3
void isiX(float sudut[]) {

    int i = 0;
    float derajat=0;
    for(i=0;derajat<=360;i++)
    {
        sudut[i] = derajat;
        derajat+=30;
    }
}

void tampilkan(float sudut[]) {

    int i;
    printf("----------------------------------------\n");
    printf("| %6s | %7s | %7s | %7s|\n","x","sin(x)","Cos(x)","Tan(x)");
    printf("----------------------------------------\n");
    for(i=0;i<12;i++)
        printf("| %6.0f | %7.2f | %7.2f | %7.2f|\n",sudut[i],sin(radian(sudut[i])),cos(radian(sudut[i])),tan(radian(sudut[i])));
    printf("----------------------------------------\n");
}

float radian(float derajat) {
    return (derajat / 180.0f) * PHI;
}

