#include <stdio.h>
struct student{

    char name[20];
    int roll;
    int marks[3];
    int avg;
};
void display(struct student s){
    int total=0;
    float avg;
    printf("\nName of student is: %s\n",s.name);
    printf("Roll number of student is: %d\n",s.roll);
    for(int i=0;i<3;i++){
        printf("Marks in subject %d: %d\n",i+1,s.marks[i]);
        total=total + s.marks[i];
    }
    avg=total/3.0;
    printf("Average of marks is: %f\n", avg);
}
struct student getinfo(){
    struct student s;
    int total =0;
    printf("Enter student name:");
    scanf("%s",s.name);
    printf("Enter student roll no:");
    scanf("%d",&s.roll);
    for(int i=0;i<3;i++){
        printf("\nEnter marks of subject %d:",i+1);
        scanf("%d",&s.marks[i]);
        total= total + s.marks[i];
    }
    float avgmarks = total/3.0;
    s.avg = avgmarks;
    return s;
}
struct student higher_avg(struct student a1, struct student a2){
    if (a1.avg > a2.avg){
        return a1;
    }
    else {
        return a2;
    }
}
int main()
{
    struct student s1,s2, higher;
    s1 = getinfo();
    s2 = getinfo();
    higher = higher_avg(s1, s2);
    display(higher);
    return 0;
}