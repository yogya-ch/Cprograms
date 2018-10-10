//
//  main.c
//  anagram
//
// Print the number of anagrams of second input string "p" that can be obtained from the substrings of first input string "s" where the "?" can be replaced with any alphabet.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG_PRINT 1

int* getCounts(char* p, int n){
    int* charCounts = calloc(27, sizeof (int));
    int charIndex = 0;
    for(int i=0; i<n; i++) {
        if (p[i] == '?') {
            charIndex = 26;
        } else if ((p[i] >= 'a') && (p[i] <= 'z')) {
            charIndex = p[i] - 'a';
        } else {
            break;
        }
        charCounts[charIndex]++;
    }
    return charCounts;
}

int compare(int* pc,int* sc,int n){
    int missing = 0;
    for(int i=0; i<26; i++){
        if(pc[i] > sc[i]){
           missing = missing + pc[i] - sc[i];
        }
    }
    if(sc[26] < missing){
        return 0;
    }
    return 1;
}

char* toString(int* counts) {  //This function is to print the values to debug the code;
    char* str = malloc(1000);
    for (int i=0; i<26; i++) {
        if (counts[i])
            sprintf(str, "%s %c - %d, ", str, 'a'+i, counts[i]);
    }
    if (counts[26])
        sprintf(str, "%s ? - %d", str, counts[26]);
    return str;
}

int isAnagram(char* s,char* p){
    int m = strlen(s);
    int n = strlen(p);
    if (DEBUG_PRINT) {
        printf("s-len=%d, p-len=%d\n",m, n);
    }
    int ret=0;
    if(n > m) {
        return 0;
    } else{
        int* pcounts = getCounts(p, n);   //count of occurance of each alphabet in the string along with the count of "?"
        if (DEBUG_PRINT) {
            char* pcs = toString(pcounts);
            printf("P counts: %s\n", pcs);
            free(pcs);
        }
        
        int count;
        char* scs;
        int* scounts = NULL;
        for(int i=0; i <= m-n; i++){
            if (scounts) {
                free(scounts);   //to free the scounts generated each time
                free(scs);
            }
            scounts = getCounts(s+i, n);
            scs = toString(scounts);
            count = compare(pcounts, scounts, n);
            ret = ret + count;
            if (DEBUG_PRINT) {
                printf("count=%d, result=%d, for iteration-%d and S counts: %s\n", count, ret, (i+1), scs);
            }
        }
    }
    return ret;
}

int main(){
    char s[106];
    scanf("%s",s);
    char p[106];
    scanf("%s",p);
    printf("%d\n",isAnagram(s,p));
    return 0;
}
