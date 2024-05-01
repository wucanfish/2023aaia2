char* reversePrefix(char* word, char ch) {
    for (int i=0;word[i]!=0;i++){
        if(word[i]==ch){
            for (int k=0;k<=i/2;k++){
                int temp=word[k];
                word[k]=word[i-k];
                word[i-k]=temp;
            }
            break;
        }
    }
    return word;
}
