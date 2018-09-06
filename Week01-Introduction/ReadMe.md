A.Tricky Alchemy
first enter the yellow crystal and blue crystal use cin>>yellowcrystal_disposal>>bluecrystal_disposal;
Yellow, green, and blue input that you want to produce use cin>>yellow_produce>>green_produce>>blue_produce;
the way to know which yellow is produced is by way of yellow which we input * 2 why multiply 2 because we make yellow ball need 2 crystal yellow use yellow_produce=yellow_produce*2;
how to know the blue produced is by means of blue we input * 3 why multiply 3 because we make blue balls need 3 crystal green use blue_produce=blue_produce*3;
how to know the green produced is by the way the green we input * 2 why multiply 2 because we make green balls need 1 crystal yellow and 1 crystal blue use green_produce=green_produce*2;
how to find out the total crystal is the yellow method that we produce plus the blue we produce plus the green we produce use  totalcrystal=yellow_produce+blue_produce+green_produce;
the way to find out the total disposal is by means of the crystal yellow we input plus the blue crystal we input use     total_disposal=yellowcrystal_disposal+bluecrystal_disposal;
how to find out the total final crystal is by way of the total crystal minus the total disposal use  totalfinal_crystal=totalcrystal-total_disposal;
how to display the final crystal total in output use cout<<totalfinal_crystal<<endl;
Done!
A.Fraction
first, i input numerator integer, denominator integer, sum int use int numerator;int  denominator;int sum
and I use srand because it controls how many loops use srand(time(0));
how to find out the numerator is by random number use numerator = rand()%sum;
how to find out the denominator is by random number use denominator = rand()%sum;
this is used to calculate how many numbers use int counterNum;
and then I use while for looping sum smaller than 3 and sum greater than 10000 use while(sum<3 || sum>10000)
i use cin because it enter the number you want in the number use  cin >> sum;
This is used to input students and clubs according to existing ratings and existing number use for (int i=2 ; i<sum; i++)
and here I also use while for looping the numerator must be larger than the denominator and also after that the numerator plus the denominator is not the same as the sum and the remaining numerator of the same denominator with 0 so they cannot be divided and the remaining numerator denominator equals 0 so that they are each can't share use  while(numerator>=denominator || numerator+denominator!=sum || (denominator%i==0&&numerator%i==0))
how to find out the numerator is by random number + 1 .why + 1 because, so it doesn't exist use denominator=rand()%sum+1;
how to find out the denominator is by random number +1. why +1 because,so it doesn't exist use numerator=rand()%sum+1;
this is used to display the numerator and denominator output use cout << numerator << " " << denominator << endl;
Done!
A.Diverse Team
the first way to enter the number of students is with cin >> students
This is used to input students and clubs according to existing ratings and existing students
cin >> rating is used to input ratings that we want to input
This is used to input students and clubs according to existing ratings and existing students
this is used to control the first, second, and so on by adding +1
this is used to control the first rating with a second rating
this is used to control if a rating and the same rating i means false
the counter is used to calculate how many different numbers
this is used to calculate how many numbers in different clubs
this is used to display yes in output
this is used to control a smaller rating equal to false and a smaller number of clubs
this is used to display the output number that has been added 1
this is used to calculate how many different numbers
this is used to display the output no if the conditions do not meet
Done!
