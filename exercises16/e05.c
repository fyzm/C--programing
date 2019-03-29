#define FEB 1

typedef enum{false,true} bool;
struct date{
  int day,month,year;
};

int day_of_year(struct date d)
{
  bool is_leap_year;
  int i,month_day[12] = {
    31,28,31,30,31,30,31,31,30,31,30,31
  };
  if(d.year % 4 !=0)
    is_leap_year = false;
  else if(d.year % 100 !=0)
    is_leap_year = true;
  else if(d.year % 400 !=0)
    is_leap_year = false;
  else
    is_leap_year = true;
  if(is_leap_year == true)month_day[FEB] = 29;
  for(i = 0;i <d.month -1;i++)
    d.day +=month_day[i];
  return d.day;
}

int compare_dates(struct date d1,struct date d2)
{
  
}