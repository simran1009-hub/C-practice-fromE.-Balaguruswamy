/*
An election is contested by 5 candidates. The candidates are numbered 1 to 5 and the voting is done by marking the 
candidate number on the ballot paper. Write a program to read the ballots and count the votes cast for each candidate
using an array variable count. In case, a number read is outside the range 1 to 5, the ballot should be considered as 
a 'spoilt ballot' and the program should also count the number of spoilt ballots.
*/
#include<stdio.h>

int main(){
    int n=10;
    int count[6]={0}, vote[n];
    printf("Type 1, 2, 3, 4 or 5 to vote for candidate 1, 2, 3, 4 or 5 respectively\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&vote[i]);
        if(vote[i]>5 || vote[i]<1){
            count[0]++;
        }
        else if(vote[i]==1){
            count[1]++;
        }
        else if(vote[i]==2){
            count[2]++;
        }
        else if(vote[i]==3){
            count[3]++;
        }
        else if(vote[i]==4){
            count[4]++;
        }
        else if(vote[i]==5){
            count[5]++;
        }
    }
    printf("The following are the number of votes for each:\nSpoilt Ballot:%d\nCandidate 1: %d\nCandidate 2: %d\nCandidate 3: %d\nCandidate 4: %d\nCandidate 5: %d\n",count[0],count[1],count[2],count[3],count[4],count[5]);
    
    return 0;
}