#include <stdio.h>

int main() {
    int n, i, x;
    
    // Kullanicidan dizinin boyutunu al
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);
    
    // Kullanicidan dizinin elemanlarýný al
    int arr[n];
    printf("Dizinin elemanlarýný girin: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Kullanicidan aranacak elemaný al
    printf("Aranacak elemaný girin: ");
    scanf("%d", &x);
    
    // Dizide arama yap
    int found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }
    
    // Sonucu ekrana yazdýr
    if (found) {
        printf("%d dizide bulundu.", x);
    } else {
        printf("%d dizide bulunamadý.", x);
    }
    return 0;
}
