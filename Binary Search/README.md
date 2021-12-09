# How to nail binary search the very first time
1. Use a variable to store the temporary result during the search(let's call it ans). Every time you hit a not found condition AND if there is a possibility of one of the mid or its neighbours being the desired answer store it.
   * Reason : storing can't harm you if its constant space, the later points will show you how it reduces a burden while writing binary search. Also it ensures an answer.

2. Whenever you hit not found condition do s = mid+1 or e = mid-1 according to the condition without worrying.
   * Reason : You have stored your value if the loop ends, can't go wrong. This also ensures you don't go into infinite loops.

3. Default to writing mid = s + (e-s)/2 and NOT mid = (s+e)/2.
   Reason : The later can result in an overflow when you are not searching in an array but rather on an answer space, specially because binary search if it can be applied is a great tool for huge numbers.

4. Write your if and elses well, and don't worry about adding extra conditions with the neighbours, at the same time don't forget to check whether the neighbour exists.
   Reason : This is the only thing you should be worrying about coding right, because this depends on the problem. If it is a easy or medium sometimes even medium-hard, this part shouldnt cause much trouble.
