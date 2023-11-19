#include <stdio.h>
#include <string.h>

void encrypt(char *str, char key) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = str[i] ^ key;  // 对每个字符进行异或操作
    }
}

void decrypt(char *str, char key) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = str[i] ^ key;  // 对每个字符进行异或操作
    }
}

int main() {
    char str[] = "hello world hello world";
    char key = 'x';
    printf("Original string: %s\n", str);
    encrypt(str, key);
    printf("Encrypted string: %s\n", str);
    decrypt(str, key);
    printf("Decrypted string: %s\n", str);
    return 0;
}