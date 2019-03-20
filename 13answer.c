/* 
int read_line(char str[],int n)
{
  int ch,i = 0;
  while((ch = getchar()) != '\n' && ch !=EOF)
    if(i < n)
        str[i++] = ch;
  str[i] = '\0';
  return i;
}


int strcmp(char *s,char *t)
{
  int i;
  for(i = 0;s[i] == t[i];i++)
      if(s[i] == '\0')
          return 0;
  return s[i] - t[i];
}
 */

