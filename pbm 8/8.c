//ইনপুট হবে ৩ পরিক্ষার নম্বর (১ম সাময়িক,২য় সায়িক, বার্ষিক)।
//১ম সাময়িক ও ২য় সাময়িক থেকে ২৫% ও বার্ষিক থেকে ৫০% নিয়ে চূড়ান্ত নম্বর।
//চূড়ান্ত নম্বর বের করার কোড কী?

#include <stdio.h>
int main(){

    float first_semester, second_semester, final_semester, total_number;

    printf("Input First Semester Marks: ");
    scanf("%f", &first_semester);

    printf("Input Second Semester Marks: ");
    scanf("%f", &second_semester);

    printf("Input Final Exam Marks: ");
    scanf("%f", &final_semester);

    total_number = (first_semester / 4) + (second_semester / 4) + (final_semester / 2);

    printf("Total marks are: %.2f", total_number);


    return 0;
}
