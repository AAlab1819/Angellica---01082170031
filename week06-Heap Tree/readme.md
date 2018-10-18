# Roy and Trending Topic


In this problem Roy wants to make social media.
He wants to create algorithms for the topics discussed on his social media.
A topic consists of an old score, but can be improved. If the topic on social media is posted,
the score is increased by 50; liked the post will give it 5; give a comment giving 10; and share give 20.
He wants to sort the top five topics based on the change in score.
He has gathered a list of N Topics (their IDs) and their popularity score (say z-score) from the database. Now z-score change everyday according to the following rules:

When a topic is mentioned in a 'Post', its z-score is increased by 50.


A 'Like' on such a Post, increases the z-score by 5.


A 'Comment' increases z-score by 10.


A 'Share' causes an increment of 20.




Worst time complexity: O(nlogn)



# Find the Running Median


for this problem how we calculate the median of the dataset. 
so, we have to calculate the median every time n print by 1.
For example, I enter n = 4, then the dataset is {1, 2, 3, and 4}. 
The first median is 1, because there are only

1.The second median is between 1 and 2, and for even median compilation,
we need to add the middle number before and after the middle number and divide by 2; so we got 1.5. 
Medianmail is 2, because containing it is strange, we can say the median by knowing the middle number.
Between {1, 2, and 3}, the middle number is 


2. Which uses the same facilities as the Second median, plus those with 2.


Worst time complexity: O(nlogn)
