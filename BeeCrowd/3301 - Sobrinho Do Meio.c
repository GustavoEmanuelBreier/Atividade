#include <stdio.h>
 
int main() {
    
    int H = 0, Z = 0, L = 0;
    
    scanf("%d\n%d\n%d", &H, &Z, &L);
    
    if ((H > Z && H < L) || (H < Z && H > L)){
        printf("huguinho\n");
    } else if ((Z > H && Z < L) || (Z < H && Z > L)){
        printf("zezinho\n");
    } else if ((L > H && L < Z) || (L < H && L > Z)){
        printf("luisinho\n");
    }
 
    return 0;
}