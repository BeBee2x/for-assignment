#include <stdio.h>
#include "stdlib.h"

char words_tofind[7]={'w','i','n','h','t','u','t'};
char words_tofind2[17]={'N','a','t','i','o','n','a','l','C','y','b','e','r','C','i','t','y'};

int count1=0;
int count2=0;
int count3=0;
int count4=0;

void findingwords1();
void findingwords2();

int main() {
    findingwords1();
    findingwords2();
    return 0;
}

void findingwords1(){
    FILE *fptr;
    fptr= fopen("words.txt","r");
    while (!feof(fptr)) {
        char c = fgetc(fptr);
        for (int i = 0; i < 7; i++) {
            if (words_tofind[i] == c) {
                c = fgetc(fptr);
                count1++;
            } else {
                count1=0;
                break;
            }
        }
        count2+=count1/7;
    }
    fclose(fptr);
    if(count2==0){
        printf("Not found winhtut in file\n");
    } else{
        printf("We found winhtut is %d times in file\n",count2);
    }
}

void findingwords2(){
    FILE *fptr;
    fptr= fopen("words.txt","r");
    while (!feof(fptr)) {
        char c = fgetc(fptr);
        for (int i = 0; i < 12; i++) {
            if (words_tofind2[i] == c) {
                c = fgetc(fptr);
                count3++;
            } else {
                count3=0;
                break;
            }
        }
        count4+=count3/12;
    }
    fclose(fptr);
    if(count4==0){
        printf("Not found NationalCyberCity in file\n");
    } else{
        printf("We found NationalCyberCity is %d times in file\n",count4);
    }
}