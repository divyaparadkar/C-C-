#Filter function 
"""filter()Function - The filter function is used to filter out the element of iterable (sequence) depending on a function that test each element in the sequence to be true or not . it return those element of sequence , for which function is true.

syntex :- filter(function , name , iterater).

function name :- it 's name of a function in which test each element in the sequence return True / False . 
if function is None , return the element that are true.

iterable:- it may be either sequence , list ,string, tuple , a a contant which supports iteration or an iterator."""


l=[2,5,6,7,8,90,23,55,67,78]
def even(x):
    if x%2==0:
        return True
    else:
        return False
l1= list(filter(even,l))
print(l1)