/* 
//操作字符结尾
size_t strlen(const char *s)
{
  size_t n;
  for(n = 0; *s != '\0';s++)
      n++;
  return n;
}

size_t strlen(const char *s)
{
  const cahr *p = s;
  while(*s)
    s++;
  return s-p;

}
//复制字符串
char *strcat(char *s1,const char *s2)
{
  char *p = s1;
  while(*p !='\0')
    p++;
  while(*s2 !='\0'){
    *p = *s2;
    p++;
    s2++;
  }
  *p = '\0';
  return s1;
}


char *strcat(char *s1,const char *s2)
{
  char *p1 = s1;
  while(*p)
    p++;
  while(*p++ = *s2++) //惯用法
    ;
  return s1;
}

char *planets = {"Mercury","Vesus","Earth"
                "Mars","Jupiter","Saturn"
}
//命令行参数
ls -l remind.c//字符串指针





 */