#include <stdio.h>

int main() {
    const char* date = "2026-03-24";
    char buffer[64]; 
    int year, month, day;

    scanf(date, "%4d-%2d-%2d", &year, &month, &day);
    sprintf(buffer, "Year: %d, Month: %d, Day: %d", year, month, day);
    
    printf("%s\n", buffer);
    return 0;
}
