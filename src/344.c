char* reverseString(char* s) {
    int len = strlen(s);
    char cp[len+1];
    for(int i=0;i<len;i++){
    	cp[len-1-i] = *(s+i);
    }
    cp[i] = '\0';
    strcpy(s,cp);
    return s;
}
