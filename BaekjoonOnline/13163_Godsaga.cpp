#include <cstdio>
#include <cstring>
int main(){
    int t, i;
    scanf("%d", &t);
    getchar();
    for(i = 0;i < t;i++){
        int cnt = 0;
        char arr[102] = {0};
        char* ptr = NULL;
        fgets(arr, 102, stdin);
        arr[strlen(arr)-1]=0;
        ptr = strtok(arr, " ");
        while(ptr != NULL){
            if(cnt == 0)
                printf("god");
            else
                printf("%s", ptr);
            cnt++;
            ptr = strtok(NULL, " ");
        }
        printf("\n");
    }
}