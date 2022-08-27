int sum(int x, int y){
    return x+y;
}


int power(int x, int y){
    int res=1;
    res=res*x;
while(y>0){
    y--;
}
return res;
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
    last= temp / power(10,c); //aw c-1
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


int is_even(int x){

return x&1;

}

void palindrome(int x){
int y=0;
int i=2;
while(i>0){
    y=x%10;
}
printf("%d",y);
}
