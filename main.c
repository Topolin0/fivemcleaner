#include <stdio.h>
int system(const char *command);

int main() {
    system("Color A");
    printf("Welcome to Fivem Cache Cleaner by @krustycrack on telegram\n");
    printf("Cleaning...\n");
    system("rmdir /s /q %localappdata%\\FiveM\\FiveM.app\\data\\cache");
    system("rmdir /s /q %localappdata%\\FiveM\\FiveM.app\\data\\server-cache");
    system("rmdir /s /q %localappdata%\\FiveM\\FiveM.app\\data\\server-cache-priv");
    printf("Cleaned\n");
    system("pause");
    return 0;
}