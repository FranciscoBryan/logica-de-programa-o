#include <stdio.h>
#include <string.h>

int main() {
    char str0[20], str1[20];

    printf("Digite uma string: ");
    fgets(str0, sizeof(str0), stdin);
    str0[strcspn(str0, "\n")] = 0;  // Remove o '\n' do final

    printf("Digite outra string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  // Remove o '\n' do final

    if (strcmp(str0, str1) == 0) {
        printf("São iguais\n");
    } else {
        printf("São diferentes\n");
    }

    return 0;
}
