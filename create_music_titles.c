#include "textfilewriter.h"

//void create_music_titles(FILE* stream){
int main(){
		FILE* stream;
		stream = fopen("title.txt", "w+");

        int num;
        scanf("%d", &num);
        for(int i=0; i<=num; i++){
                write_file("title.txt");
        }
		read_file("title.txt");
        fclose(stream);

}
