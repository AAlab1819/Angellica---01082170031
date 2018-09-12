#291A-A. Spyke Talks


In the 291A spyke talks issue, what is meant is to find a multiplied number 2.


First of all, I enter secretary id and use array,


	int n;//number of secretaries
	int p=0;//pairs of secretary counter
	int temp;//to store temporary number
	cin>>n;
	
After that I use 'for' for secretary id sort using bubble sort,

	int ids[n];//to input the id of secretaries
	for(int i=0; i<n; i++)
	{
		cin>>ids[i];
	}
And using ‘temp (to store temporary number) '.

	for(int i=0; i<n-1; i++)//sort the id of secretaries with bubble sort
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(ids[j]>ids[j+1])
			{
				temp=ids[j];
				ids[j]=ids[j+1];
				ids[j+1]=temp;
Next I want to count how many secretary couples chat using if.

	//to count how many pairs of chatting secretaries
		if(ids[i]!=0)
		{
			if(ids[i]==ids[i+1])
Then, I check whether there is a conference that happens, that is with ‘if’ ‘else’

	//to check if conferences happens
				if(ids[i]==ids[i+2])
				{
					cout<<"-1"<<endl;
					return 0;
				}
				else
				{
					p++;
				}
			}
		}
		else
		{
			//do not count double or more zero
		}
	}
	
	
And lastly I use the cout ‘p (pairs of secretary counter) 'to display the screen output.
cout<<p<<endl;
Done!



#230A-Dragon
In the matter of 230A Dragon, what is meant is to compare the strength of kirito and dragon.


If Kirito's strength is greater than a dragon, the dragon loses and the dragon goes to the next level based on the point of experience;


if it's not a dead dragon. so my protagonist is able to fight dragons in any order.


To solve this problem, I first enter the level of my protagonist, then the number of dragons he fights (n).


Then I enter the dragon's power (e) and the experience he gained when defeating the dragon (f). This power and experience will be transferred to the array,


and sorted using insertion arrays.


After that, I created the 'for' function to call an array; and use ‘if’ to function


	insertionSort(dragon, n);
    for(int i=0; i<n; i++)
    {
        if(s>dragon[n-1].str)////if Kirito is stronger than the dragon
        {
            cout<<"YES";
            break;
        }
        if(s>dragon[i].str)
        {
            s+=dragon[i].bonus;
        }
        else////if Kirito is weaker than the dragon
        {
            cout<<"NO";
            break;
        }
	
	
determine whether my soldier's strength is greater or lower. If it's bigger,


then the result will be "YES";


else, it will print "NO"


Done!



#768A-A. Oath of the Night's Watch


In the matter of 768A oath of the night watch, what is meant is to find the middle value, which is to look for a number lower than the maximum limit, and greater than the minimum limit.


First of all, I enter the number of servants, and I input each power by using an array. after that I look for the max and min values of the array.


And I also use the functions 'for' and 'if' which function to control the element not maximally, and not min and calculate it.


	for (int i=0; i<ns; i++)
    {
		if (a[i] > max)
		{
        	max = a[i];
        }
      	else if (a[i] < min)
        {
        	min = a[i];
        }
    }
  	for(int i=0; i<ns; i++)
	{
		if(a[i]<max&&a[i]>min)
		{
			h++;
		}
	}
	cout<<h<<endl;
	
	
And then we cout "h" then show it in output


Done!


