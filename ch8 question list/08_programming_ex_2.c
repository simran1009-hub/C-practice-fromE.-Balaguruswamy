/*
The daily maximum temperatures recorded in 10 cities during the month of January (for all 31 days) have been tabulated
as follows:
                    City
Day         1       2       3-------------------------      10
1                            -------------------------
2
3
-
-
-
-
31
Write a program to read the table elements into a two-dimensional array temperature, and to find the city and day
corresponding to
(a) the highest temperature and
*/
#include<stdio.h>

int main(){
    float temperature[31][10];
    int city_,day_;
    
    for (int day = 0; day < 31; day++)
    {
        for (int city = 0; city < 10; city++)
        {
            printf("Enter the maximum temperature for city = %d & for day = %d\n",city,day);
            scanf("%f",&temperature[day][city]);
        }
        
    }
    printf("\t\t\tCity\nDay\t\t");
    float max=temperature[0][0];
    for (int day = 0; day < 31; day++)
    {
        for (int city = 0; city < 10; city++)
        {
            if(max<=temperature[day][city]){
                max = temperature[day][city];
                city_= city;
                day_ = day;
            }
        }
    }
    printf("The maximum temperature is %.2f which was obeserved in city = %d on day = %d\n",max,city_+1,day_+1);
    
    
    return 0;
}