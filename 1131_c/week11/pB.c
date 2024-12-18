#include<stdio.h>
#include<string.h>
#include<stdlib.h>



const char *d = "0123456789\t.,!?&[]\"'/:\n#@%^*()+{}_|\\;<>~`-";
int main() {
    int n, m, cnt=0;
    while (scanf("%d%d", &n, &m) != EOF) {
        if (cnt != 0) {
            printf("abc%d\n", cnt);
        }
        else {
            cnt++;
        }


        // char *a[21], *b[21], *_b[21];
        char a[21][100], b[21][100], _b[21][100];
        for (int i=0; i < n; ++i) {
            scanf("%s", &a[i]);
            printf("%s\n", a[i]);
        }


        for (int i=0; i < m; ++i) {
            char buffer[100];
            if (fgets(b[i], sizeof(b[i]), stdin)) {
                _b[i] = b[i]
            }




            int len = strlen(b[i]);
            for (int j=0; j < len; ++j) {
                if (b[i][j] >= 'A' && b[i][j] <= 'Z') _b[i][j] = b[i][j] - 'A' + 'a';
            }
        }




        printf("\n");

        // char **str[20];
        // int _cnt[20] = {0};
        // for (int i=0; i < m; ++i) {
        //     char *ptr = strtok(_b[i], d);
        //     while (ptr != NULL) {
        //         str[i][_cnt[i]++] = ptr;
        //         ptr = strtok(NULL, d);
        //     }
        // }


        // for (int i=0; i < m; ++i) {
        //     for (int j=0; j < _cnt[i]; ++j) {
        //         printf("%s ", str[i][j]);
        //     }
        //     printf("\n");
        // }
    } 
}