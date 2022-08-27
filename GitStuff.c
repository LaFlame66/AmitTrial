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

for(int i=0;i<c;i++){
    first=x % 10;
    last= x / power(10,c-1);
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
