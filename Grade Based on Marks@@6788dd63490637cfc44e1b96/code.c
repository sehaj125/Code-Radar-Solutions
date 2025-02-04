#include <stdio.h>

int main() {
    int main(){
        int marks;
        char grade;
        scanf("%d",&marks);
        if(marks>=90){
            grade = 'A';
        }
        if else(marks>=80){
            grade = 'B';
        }
        if else(marks>=70){
            grade = 'C';
        }
        if else(marks>=60){
            grade = 'D';
        }
        else{
            grade = 'F';
        }
        printf("%c",grade);
    }
    return 0;
}