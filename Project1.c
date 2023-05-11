#include <stdio.h>

int main() {
    int n, i, x;
    
    // Kullanicidan dizinin boyutunu al
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);
    
    // Kullanicidan dizinin elemanlar�n� al
    int arr[n];
    printf("Dizinin elemanlar�n� girin: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Kullanicidan aranacak eleman� al
    printf("Aranacak eleman� girin: ");
    scanf("%d", &x);
    
    // Dizide arama yap
    int found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }
    
    // Sonucu ekrana yazd�r
    if (found) {
        printf("%d dizide bulundu.", x);
    } else {
        printf("%d dizide bulunamad�.", x);
    }
    return 0;
}
