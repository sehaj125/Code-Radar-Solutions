#include <stdio.h>

int main() {
    int main(){
        int marks;
        char grade;
        scanf("%d",&marks);
        if(marks>=90){
            grade = 'A';
        }
        else if(marks>=80){
            grade = 'B';
        }
        else if(marks>=70){
            grade = 'C';
        }
        else if(marks>=60){
            grade = 'D';
        }
        else{
            grade = 'F';
        }
        printf("%c",grade);
    }
    return 0;
}