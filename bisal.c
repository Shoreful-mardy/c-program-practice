#include<stdio.h>
int main()
{
    /*
    //quadratic equation algorithm
       double a,b,c,d,x1,x2;
       printf("Enter a b c value : ");
       scanf("%lf %lf %lf",&a,&b,&c);
       d = sqrt(b*b-4*a*c);
       x1 = (-b+d)/(2*a);
       x2 = (-b-d)/(2*a);
       printf("x1 : %lf\n",x1);
       printf("x2 : %lf",x2);


    //math.h librey fucntion abs(),sqrt(),pow(), log(),log10(),exp(),sin(),cos(),tan(),round(),trunc(),ceil(),floor()
       float sum = sqrt(25);
       printf("%f\n",sum);

       float num = abs(-25);
       printf("num: %f",num);

       double sum = pow(3,2);
       printf("%lf",sum);


    double x = 0.35;
    double result = sin(x);
    printf("%lf ",result);


    double x = 2.9;
    double result = floor(x);
    printf("%lf ",result);


    int x = 3;
    x += x+2;
    printf("%d",x);


    int large,small;
    printf("Enter two number : ");
    scanf("%d %d",&large,&small);
    if(large<small)
    printf("the large number is : %d\n",small);
    else
    printf("the large number is : %d\n",large);

    //write a program that read 3 number and display maximun number
    //creat a program that can say year leep or not

    int year;
    printf("Enter any year : ");
    scanf("%d",&year);
    if(year%400== 0)
    {
        printf("leep year");
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("Leep year");
    }
    else
    {
        printf("Not a leep year");
    }

    //create that program that can say letter small or capitel:
    char ch;
    printf("Enter a charecter : ");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    {

        printf("Capitel letter!!");
    }
    else if(ch >='a' && ch <='z')
    {

        printf("Small letter!!");
    }
    else
    {
        printf("Not a letter!!");
    }

    //create a program that can say digit spalling use switch ,case ;

    int num;
    printf("ENTER DIGIT:");
    scanf("%d",&num);
    switch(num)
    {
    case 1 :
        printf(" It's : ONE");
        break;
    case 2 :
        printf(" It's : TWO");
        break;
    case 3 :
        printf(" It's : THREE");
        break;
    case 4 :
        printf(" It's : FOUR");
        break;
    case 5 :
        printf(" It's : FIVE");
        break;
    case 6 :
        printf(" It's : SIX");
        break;
    case 7 :
        printf(" It's : SEVEN");
        break;
    case 8 :
        printf(" It's : EIGHT");
        break;
    case 9 :
        printf(" It's : NINE");
        break;
    case 0:
        printf(" It's : ZERO");
        break;
    default:
        printf("Enter va lid digit");
    }

    //menu based tempareture convarter;(0°C × 9/5) + 32 = 32°F (0°F − 32) × 5/9 = -17.78°C


    int choos;
    float temp,convertTemp;
    printf("TEMPARETURE CONVARTER \n");
    printf("1.Celcius to Fahrenheit \n");
    printf("2.Fahrenheit to Celcius \n");
    printf("Enter your choose:\n");
    scanf("%d",&choos);
    switch(choos)
    {
    case 1:
    {
        printf("Enter Celsius :");
        scanf("%f",&temp);
        convertTemp = (temp *1.8)+32;
        printf("Fahrenheit : %.2f\n",convertTemp);
        break;
    }
    case 2:
    {
        printf("Enter Fahrenheit :");
        scanf("%f",&temp);
        convertTemp = (temp -32)*5/9;
        printf("Celsius : %.2f\n",convertTemp);

        break;
    }
    default:
        printf("Enter valid value!!");
    }

    //create a function like a calculator ..and you can selected the oparetor use switch case :

    int num1,num2;
    char op;
    printf("Enter oparetor(+,-,*,/):\n");
    scanf("%c",&op);
    printf("Enter a oparent number : ");
    scanf("%d %d",&num1,&num2);

    switch(op)
    {
    case '+':
        printf("%d + %d  = %d \n",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d  - %d = %d \n",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d  * %d  = %d \n",num1,num2,num1*num2);
        break;
    case '/':
        printf("%d  / %d  = %d \n",num1,num2,num1/num2);
        break;
    default:
        printf("Enter valid value!!");

    }
    int i;
    for(i = 0; i < 65; i++)
    {
        if(i == 70)
        {
            break;
        }
        printf("%d\n",i);
    }

    // write arrey
       int num[100],n,i;
       printf("how meny number : ");
       scanf("%d",&n);///input
       for(i=0;i<n;i++)
       {
       scanf("%d",&num[i]);
       }///for input loop
       int max = num[0];
       for(i=1;i<n;i++)
       {
       if(max < num[i])///condition
       {///stetment
         max = num[i];
       }
       }///for varification loop
       int min = num[0];
       for(i=1;i<n;i++)///for minimum
       {
       if(min > num[i])
       {
           min = num[i];
       }
       }
       int sum = 0;

       for(i=0;i<n;i++)
       {
       sum = sum + num[i];
       }
       float ava = sum/n;
       printf("Maximun = %d\n",max);
       printf("Minimun = %d\n",min);
       printf("Sum = %d\n",sum);
       printf("Avarage = %f\n",ava);

       ///fibonacci series

    int n,a[30],i;
    printf("How meny fibonacci number? ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i = 2; i < n; i++)
    {
        a[i] = a[i-1] + a[i - 2];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }


    ////linear search
    int num[]={10,2,50,20,5,46,85};
    int value,pos=-1,i;
    printf("Enter the value you want to search : ");
    scanf("%d",&value);
    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("itam is not found!!!");
    }
    else
    {
        printf("itam is found at %d position",pos);
    }

    ///copying array1 element to array2
    int array1[30],array2[30],i,n;
    printf("Enter a Array size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("array1 is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i] = array1[i];
    }
    printf("\nArray2 is : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }

    ///2d array/multidimonsion array/matrix array
    int i,j;
    int a[3][4]={  {1,2,3,4},{5,6,7,8},{10,11,12,13} };
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    ///getting 2d array input by user ;
     int i,j;
    int a[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    ///printing line
    printf("all array value here \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    ///2 matrix input and output ;
     int i,j;
    int a[3][4],b[3][4];
    printf("Enter first matrix here \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    ///printing line
    printf("A array value here \n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter secound matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    ///printing line
    printf("b array value here \n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    /// matrix addition and substraction

      int i,j,numberOfrow,numberOfcols;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter size row and colam : ");
    scanf("%d %d",&numberOfrow,&numberOfcols);

    printf("Enter first matrix here \n");///
    for(i=0;i<numberOfrow;i++)
    {
        for(j=0;j<numberOfcols;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter secound matrix : \n");
    for(i=0;i<numberOfrow;i++)
    {
        for(j=0;j<numberOfcols;j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
      ///printing line
    printf("A array value here \n");
    for(i=0;i<numberOfrow;i++)
    {
        printf("\t");
        for(j=0;j<numberOfcols;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    ///printing line
    printf("b array value here \n");
    for(i=0;i<numberOfrow;i++)
    {
        printf("\t");
        for(j=0;j<numberOfcols;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    ///Addition:
    for(i=0;i<numberOfrow;i++)
    {
        for(j=0;j<numberOfcols;j++)
        {
           c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }
    ///print addition
    printf("Addition = \n");
    for(i=0;i<numberOfrow;i++)
    {
        printf("\t");
        for(j=0;j<numberOfcols;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    ///substraction
    for(i=0;i<numberOfrow;i++)
    {
        for(j=0;j<numberOfcols;j++)
        {
           c[i][j] = a[i][j] - b[i][j];
        }
        printf("\n");
    }
       printf("Substraction : \n");
    for(i=0;i<numberOfrow;i++)
    {
        printf("\t");
        for(j=0;j<numberOfcols;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

///create program that can get input 2 dimension array in 2 matrix and multiple the arrey value :
    int a[10][10],b[10][10],result[10][10],i,j,r1,r2,c1,c2,k,sum=0;
    printf("Enter frist matrix Row and colam : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter Second matrix Row and colam : ");
    scanf("%d%d",&r2,&c2);
    while(r1!=c2)
    {
        printf("ERROR!!! your row and colam are not equal!\n");
        printf("Enter frist matrix Row and colam : ");
        scanf("%d%d",&r1,&c1);
        printf("Enter Second matrix Row and colam : ");
        scanf("%d%d",&r2,&c2);
    }
    ///taking frist matrix input value
    printf("Enter frist matrix value : \n");
    for(i=0; i<r1; i++)
    {
        printf("\n");
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    ///taking second matrix input value
    printf("Enter Second matrix value : \n");
    for(i=0; i<r2; i++)
    {
        printf("\n");
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }


    ///print frist matrix
     printf("Second matrix value : \n");
    for(i=0; i<r1; i++)
    {
        printf("\t\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    ///print second matrix
    printf("Second matrix value : \n");
    for(i=0; i<r2; i++)
    {
        printf("\t\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
     ///multiplication
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    ///print result matrix
    printf("result matrix value : \n");
    for(i=0; i<r1; i++)
    {
        printf("\t\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

///transposed matrix
    int a[10][10],transpose[10][10],i,j,row,col;
    printf("Enter row and colam for matrix : ");
    scanf("%d %d",&row,&col);
    printf("Enter matrix value : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    ///transpose the value :
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    ///print value:
    printf("Entered matrix value : \n");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    ///print transpoposed value :
    printf("Transposed matrix value : \n");
    for(i=0;i<col;i++)
    {
        printf("\t");
        for(j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);

        }
        printf("\n");
    }

///sum of diagonal elements
    int a[3][3],i,j,sum=0;
    printf("Enter matrix value : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    ////diagonal elements
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    ///print value:
    printf("Entered matrix value : \n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    ///print sum :
    printf("Sum of diagonal elements : %d",sum);

///sum of upper and lower triangle elements ;
    int a[3][3],i,j,sum=0,upperSum=0,lowerSum=0;
    printf("Enter matrix value : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    ////diagonal elements
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum = sum + a[i][j];
            }
        }
    }
     //// upper diagonal elements
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            {
                upperSum = upperSum + a[i][j];
            }
        }
    }
     ////lowersum diagonal elements
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>j)
            {
                lowerSum = lowerSum + a[i][j];
            }
        }
    }
    ///print value:
    printf("Entered matrix value : \n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    ///print sum :
    printf("Sum of diagonal elements : %d\n",sum);
    printf("Sum of diagonal of upper triangle : %d\n",upperSum);
    printf("Sum of diagonal of lower triangle  : %d\n",lowerSum);

///string

    char a[5];
    a[0] = 'b';
    a[1] = 'i';
    a[2] = 's';
    a[3] = 'a';
    //you can say to program end of array string = [a[4]=\0;]
    printf(" a = %s",a);

/// input and display string
    char s1[10];
    printf("Enter your name : ");
    gets(s1);//scanf ,gets function can get value in after space
    printf("Full Name : %s",s1);

///display string character-wise
    char s1[] = "shoreful";
    int i=0;
    while(s1[i]!= '\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }

///finding length useing libery function
    char s1[]="bisal";
    int len = strlen(s1);
    printf("lenth = %d ",len);

///finding length without libery function
    char s1[]="bisal";
    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("lenth = %d ",len);

///copying string useing libery function
    char source[]="c progtraming";
    char target[20];
    strcpy(target,source);
    printf("source : %s\n",source);
    printf("target : %s",target);

///concat string
    char source[]="c progtraming";
    char target[]=" i very easy";
    strcat(source,target/*you can add string here in " stucture" *//*);
    printf("Ful string  : %s\n",source);

///concat string whitout libery function
    char source[50]="c progtraming";
    char target[]=" is very easy";
    int i =0,len=0,j=0;
    while(source[i]!='\0')
    {
        i++;
        len++;
    }
    while(target[j]!='\0')
    {
        source[len + j] = target[j];
        j++;
    }
    printf("Ful string  : %s\n",source);

///compire string using function
    char a[]="shoreful";
    char b[]="shoreful";
    int d = strcmp(a,b);
    if(d==0)
    {
        printf("String are equals");
    }
    else
    {
        printf("String are not Equals!");
    }

///reverse string using function
    char a[]="shoreful";
    printf("Normal : %s\n",a);
    strrev(a);
    printf("Revarese : %s\n",a);

///reverse string without function//cheking the revarce value is palindrome or not
    char a[30]="madam";
    char b[30];
    printf("Normal : %s\n",a);
    int i=0,len=0,j;
    while(a[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0; i--,j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    printf("Revarve : %s\n",b);
    int d = strcmp(a,b);
    if(d==0)
    {
      printf("string is palindrome!");
    }
    else
    {
     printf("string is not palindreome");
    }

///string swapping
   char a[50] = "bangladesh";
   char b[50] = "india";
   char c[50];
   printf("a= %s\n",a);
   printf("b= %s\n",b);
   strcpy(c,a);
   strcpy(a,b);
   strcpy(b,c);
   printf("a= %s\n",a);
   printf("b= %s\n",b);

/// strupr and strlwr
    char a[] = "bangladesh";
    char b[] = "INDIA";
    strupr(a);
    strlwr(b);
    printf("a = %s\n",a);
    printf("b = %s\n",b);
*/
///number of vowel ,consonants, words,digit and others
    char str[100],ch;
    int i,vowel,consonant,digit,word,other;
    printf("Enter a string : ");
    gets(str);
    i=vowel=consonant=digit=word=other=0;
    while((ch = str[i])!='\0')
    {
       if(ch=='a'|| ch=='e' ||ch=='i'||ch=='o'||ch=='u'||
          ch=='A'|| ch=='E' ||ch=='I'||ch=='O'||ch=='U')
          vowel++;
          else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
          consonant++;
          else if(ch>='0' && ch<='9')
          digit++;
          else if(ch==' ')
          word++;
          else
          other++;
        i++;
    }
    word++;
    printf("number of vowel :%d\n",vowel);
    printf("number of consonant :%d\n",consonant);
    printf("number of digit :%d\n",digit);
    printf("number of word :%d\n",word);
    printf("number of other :%d\n",other);










   return 0;
}
