int sum(int x, int y){
    return x+y;
}


void isPalindrome(int x){
    int c=0;
    int temp=x;
    char status='f';
    int first, last;
    while(temp>10){
       temp / 10;
       c++;
    }
while(c>0){
    temp=x;
    first=temp % 10;
    last= temp / power(10,c-1);
    c--;
    if(first==last){
        status='t';
    }else{
        status='f';
    }

     }
      if(status=='t'){
        printf("PALINDROME");
    }else{
        printf("NOT PALINDROME");

    }
          }
int power(int x, int y){
    int res=1;
while(y>0){
    res=x*x;
    y--;
}
return res;
}
