#include<stdio.h>

struct unsur {
    int panjang;
    int lebar;
    int tinggi;
};

int main(){
    int n;
    struct unsur kotak[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &kotak[i].panjang, &kotak[i].lebar, &kotak[i].tinggi);
    }

    for(int i = 0; i < n; i++){
        if(kotak[i].tinggi < 41) {
            printf("%d\n", kotak[i].panjang*kotak[i].lebar*kotak[i].tinggi);
        }
    }
    return 0;
}
