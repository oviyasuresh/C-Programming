s1=int(input("enter the length:\n"))
def is_palindrome(s1):
    if len(s1) < 1:
        return True
    else:
        if s1[0] == s1[-1]:
            return is_palindrome(s1[1:-1])
        else:
            return False
a=str(input("Enter string:"))
if(is_palindrome(a)==True):
    print("String is a palindrome!")
else:
    print("String isn't a palindrome!")
