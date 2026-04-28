#include <stdio.h>

int main() {

    int casos, i, f, num;
    char texto[60];

    scanf("%d", &casos);

    for(i=0; i < casos; i++) {

        scanf("%s", texto);
        scanf("%d", &num);

        f = 0;
        while (texto[f] != '\0') {
        
            texto[f] = texto[f] - num;

            if (texto[f] < 'A'){
                texto[f] = texto[f] + 26;
            }
            f++;
        }
        
        printf("%s\n", texto);
    }
    return 0;
}
#include <stdio.h>

int main() {

    int casos, i, f, num;
    char texto[60];

    scanf("%d", &casos);

    for(i=0; i < casos; i++) {

        scanf("%s", texto);
        scanf("%d", &num);

        f = 0;
        while (texto[f] != '\0') {
        
            texto[f] = texto[f] - num;

            if (texto[f] < 'A'){
                texto[f] = texto[f] + 26;
            }
            f++;
        }
        
        printf("%s\n", texto);
    }
    return 0;
}
