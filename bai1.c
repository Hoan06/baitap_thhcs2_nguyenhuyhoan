#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuan_hoa_ho_ten(char *s) {
    int i, len = strlen(s);

    // loai bo khoang trong thua o dau
    while (isspace(s[0])) {
        strcpy(s, s + 1);
        len--;
    }

    // loai bo khoang trong thua o dau
    while (isspace(s[len - 1])) {
        s[len - 1] = '\0';
        len--;
    }




    // chuan hoa tung tu
    s[0] = toupper(s[0]);
    for (i = 1; i < len; i++) {
        if (isspace(s[i - 1])) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
}







int main() {
    int T, i;
    char s[81];

    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%s", s);
        chuan_hoa_ho_ten(s);
        printf("%s\n", s);
    }





    return 0;
}
