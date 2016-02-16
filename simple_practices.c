#include "simple_practices.h"

/* int main(int argc, char *argv[]){*/

int main(){
/* simple data structures */
typedef struct linked_list{
    int value;
    struct linked_list *prev;
    struct linked_list *next;
}linked_list_t;

/*int *test_int_array = malloc((STR_TOTAL_LEN)*sizeof(int));*/
/* char *test_string = malloc((STR_TOTAL_LEN)*sizeof(char)); */

/* using the functions */
    /* http://www.geeksforgeeks.org/storage-for-strings-in-c/ */
    /* test_string = "I am a good guy"; */ /* <-- a string assigned directly to pointer is read-only stored in data-segment. cannot modify */
    /* char test_string [] = "I am a good guy"; */ /* <-- a string assigned this way is not read-only, but stored in stack (limitd space) */
    
    char test_string[] = "I am a good guy"; 
    printf("Original string is: %s\n",test_string);
    test_string = reverse_string(test_string, strlen(test_string));
    printf("reversed string is: %s\n",test_string);
    
    /* free memory */
    free(test_int_array);
    free(test_string);
}


/* function definitions */

char* reverse_string(char* input_string, int str_total_len){
    char temp;
    int i,size=0;
    
    for(i = 0;input_string[i] != '\0' && i < str_total_len; size++,i++){
     ;   
    }
        
    printf("string size is: %d\n",size);
    
       // temp = input_string[0];
        input_string[0] = input_string[15];
      //  input_string[15] = temp;
    
    /*
    for (i = 0; i <= (size/2); i++){
        printf("i= %d\n",i);
        printf("%c %c\n",input_string[i],input_string[size-1-i]);
        
        temp = input_string[i];
        input_string[i] = input_string[size-1-i];
        input_string[size-1-i] = temp;
    }
    */
        printf("string is reversed.\n");
            
    return input_string;
}

