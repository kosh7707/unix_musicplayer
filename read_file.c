void read_file(char* file_name){
		FILE* stream = fopen(file_name, "r");

        int num;
        char musicTitle[51];
        scanf("%d", &num);
        for(int i=0; i<=num; i++){
                fgets(musicTitle, sizeof(musicTitle), stdin);
				fputs(musicTitle, stream);
        }
        fclose(stream);
}
