#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int sol = 0;
    int sag = n - 1;
    
    while (sol <= sag) {
        int orta = sol + (sag - sol) / 2;
        
        if (arr[orta] == key) {
            return orta;
        }
        
        if (arr[orta] < key) {
            sol = orta + 1;
        } else {
            sag = orta - 1;
        }
    }
    
    return -1;
}

int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int aranan;
    
    printf("Aranacak elemani giriniz: ");
    scanf("%d", &aranan);
    
    int sonuc = binarySearch(dizi, n, aranan);
    
    if (sonuc == -1) {
        printf("Eleman bulunamadi.\n");
    } else {
        printf("Eleman dizinin %d. indeksinde bulundu.\n", sonuc);
    }
    
    return 0;
}
