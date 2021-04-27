//I did it in a very bad way in the end
//Those if condition
//So UGLY

#include <stdio.h>
#include <string.h>

struct Student {
    char Name[15];
    int Marks_Math;
    int Marks_Physics;
    int Marks_Chemistry;
    int Total;
}S[3];

void byRanking(struct Student *ptr_S, int size);

void countTotal(struct Student *ptr_S, int size);

void comparing(struct Student S[], int size);

char name_list[3][15] = {};

int main() {
    struct Student *ptr_S = S;
    char student_list[3] = {'A', 'B', 'C'};
    for(int i=0;i<3;i++) {
        printf("input student %c's name, marks of math, phsics and chemistry(integer)\n", student_list[i]);
        scanf("%s %d %d %d", S[i].Name, &S[i].Marks_Math, &S[i].Marks_Physics, &S[i].Marks_Chemistry);
    }
    printf("(From highest to lowest)The rank is:\n ");
    byRanking(ptr_S, 3);
    comparing(S, 3);
    for(int i=0;i<3;i++) {
      printf("%s\n", name_list[i]);
    }
    
}

void byRanking(struct Student *ptr_S, int size) {
    countTotal(ptr_S, 3);
    
}

void countTotal(struct Student *ptr_S, int size) {
    for(int i=0;i<size;i++) {
        ptr_S->Total = ptr_S->Marks_Math + ptr_S->Marks_Physics + ptr_S->Marks_Chemistry;
        ptr_S++;
    }
}

void comparing(struct Student S[], int size) {
    if(S[0].Total==S[1].Total&&S[0].Total==S[2].Total) {
        if(S[0].Marks_Math==S[1].Marks_Math&&S[0].Marks_Math==S[2].Marks_Math);
        else if(S[0].Marks_Math>S[1].Marks_Math&&S[0].Marks_Math>S[2].Marks_Math) {
            strcpy(name_list[0], S[0].Name);
            if(S[1].Marks_Math>S[2].Marks_Math) {
                strcpy(name_list[1], S[1].Name);
                strcpy(name_list[2], S[2].Name);
                return;
            }else {
                strcpy(name_list[1], S[2].Name);
                strcpy(name_list[2], S[1].Name);
                return;
            }
        }else if(S[1].Marks_Math>S[0].Marks_Math&&S[1].Marks_Math>S[2].Marks_Math) {
            strcpy(name_list[0], S[1].Name);
            if(S[0].Marks_Math>S[2].Marks_Math) {
                strcpy(name_list[1], S[0].Name);
                strcpy(name_list[2], S[2].Name);
                return;
            }else {
                strcpy(name_list[1], S[2].Name);
                strcpy(name_list[2], S[0].Name);
                return;
            }
        }else {
            strcpy(name_list[0], S[2].Name);
            if(S[0].Marks_Math>S[1].Marks_Math) {
                strcpy(name_list[1], S[0].Name);
                strcpy(name_list[2], S[1].Name);
                return;
            }else {
                strcpy(name_list[1], S[1].Name);
                strcpy(name_list[2], S[0].Name);
                return;
            }
        }
//--------------------------------------------------------------     
        if(S[0].Marks_Physics==S[1].Marks_Physics&&S[0].Marks_Physics==S[2].Marks_Physics);
        else if(S[0].Marks_Physics>S[1].Marks_Physics&&S[0].Marks_Physics>S[2].Marks_Physics) {
            strcpy(name_list[0], S[0].Name);
            if(S[1].Marks_Physics>S[2].Marks_Physics) {
                strcpy(name_list[1], S[1].Name);
                strcpy(name_list[2], S[2].Name);
                return;
            }else {
                strcpy(name_list[1], S[2].Name);
                strcpy(name_list[2], S[1].Name);
                return;
            }
        }else if(S[1].Marks_Physics>S[0].Marks_Physics&&S[1].Marks_Physics>S[2].Marks_Physics) {
            strcpy(name_list[0], S[1].Name);
            if(S[0].Marks_Physics>S[2].Marks_Physics) {
                strcpy(name_list[1], S[0].Name);
                strcpy(name_list[2], S[2].Name);
                return;
            }else {
                strcpy(name_list[1], S[2].Name);
                strcpy(name_list[2], S[0].Name);
                return;
            }
        }else {
            strcpy(name_list[0], S[2].Name);
            if(S[0].Marks_Physics>S[1].Marks_Physics) {
                strcpy(name_list[1], S[0].Name);
                strcpy(name_list[2], S[1].Name);
                return;
            }else {
                strcpy(name_list[1], S[1].Name);
                strcpy(name_list[2], S[0].Name);
                return;
            }
        }
  
  //--------------------------------------------------------------     
        if(S[0].Marks_Chemistry==S[1].Marks_Chemistry&&S[0].Marks_Chemistry==S[2].Marks_Chemistry);
        else if(S[0].Marks_Chemistry>S[1].Marks_Chemistry&&S[0].Marks_Chemistry>S[2].Marks_Chemistry) {
            strcpy(name_list[0], S[0].Name);
            if(S[1].Marks_Chemistry>S[2].Marks_Chemistry) {
                strcpy(name_list[1], S[1].Name);
                strcpy(name_list[2], S[2].Name);
                return;
            }else {
                strcpy(name_list[1], S[2].Name);
                strcpy(name_list[2], S[1].Name);
                return;
            }
        }else if(S[1].Marks_Chemistry>S[0].Marks_Chemistry&&S[1].Marks_Chemistry>S[2].Marks_Chemistry) {
            strcpy(name_list[0], S[1].Name);
            if(S[0].Marks_Chemistry>S[2].Marks_Chemistry) {
                strcpy(name_list[1], S[0].Name);
                strcpy(name_list[2], S[2].Name);
                return;
            }else {
                strcpy(name_list[1], S[2].Name);
                strcpy(name_list[2], S[0].Name);
                return;
            }
        }else {
            strcpy(name_list[0], S[2].Name);
            if(S[0].Marks_Chemistry>S[1].Marks_Chemistry) {
                strcpy(name_list[1], S[0].Name);
                strcpy(name_list[2], S[1].Name);
                return;
            }else {
                strcpy(name_list[1], S[1].Name);
                strcpy(name_list[2], S[0].Name);
                return;
            }
        }
      }
    else {
        if(S[0].Total>S[1].Total&&S[0].Total>S[2].Total) {
                strcpy(name_list[0], S[0].Name);
           if(S[1].Total>S[2].Total) {
                strcpy(name_list[1], S[1].Name);
                strcpy(name_list[2], S[2].Name);
                return;
            }else {
                strcpy(name_list[1], S[2].Name);
                strcpy(name_list[2], S[1].Name);
                return;
            }
          }
      }
}

