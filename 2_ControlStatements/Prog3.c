//if..else lader example

#include <stdio.h>
int main()
{
    int score;
    char name[20];
    printf("Enter Player Name");
    scanf("%s",name);
    printf("Enter Score");
    scanf("%d",&score);
    if(score==0)
    {
        printf("%s Plays %d and he is  Dock Out",name,score);
    }
    else 
    {
        if(score>0 && score<50)
        {
        printf("%s Plays %d and he is  Below Half Century",name,score);
        }
        else
        {
            if(score==50)
            {
            printf("%s Plays %d and he is  Half Century",name,score);
            }
            else
            {
                if(score>50 && score<100)
                {
                printf("%s Plays %d and he is  Above Half Century",name,score);
                }
                    else
                    {
                    if(score==100)
                    {
                    printf("%s Plays %d and he is  Century",name,score);
                    }
                    else
                    {
                        if(score>100 && score<150)
                        {
                        printf("%s Plays %d and he is  Above Century",name,score);
                         }
                        else
                        {
                            if(score==150)
                            {
                            printf("%s Plays %d and he is  One and Half Century",name,score);
                            }
                            else
                            {
                                if(score>150 && score<200)
                                {
                                printf("%s Plays %d and he is  Above One and Half Century",name,score);
                                }
                                else
                                {
                                    if(score==200)
                                    {
                                     printf("%s Plays %d and he is  Double Century",name,score);   
                                    }
                                    else
                                    {
                                        if(score>200)
                                        {
                                            printf("%s Plays %d and he is Above Double Century",name,score);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
            
    return 0;
}
