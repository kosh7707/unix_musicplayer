#include "textfilewriter.h"

int main(){
	FILE* title;
        title = fopen("title.txt", "w");

        int num;
        char musicTitle[51];
        scanf("%d", &num);
        for(int i=0; i<=num; i++){
                read_file(title);
		write_file(title);
        }
        fclose(title);

}
