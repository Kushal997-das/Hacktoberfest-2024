# Fn for reversal algorithm of array rotation

def Utility(array, low, high):
    while low < high:
        temp = array[low]    # storing first element to  var. temp
        array[low] = array[high]  #  storing hth element to positon array [l]
        array[high] = temp   #  storing temp  to positon array [h]
        low += 1
        high -= 1


def left_rotate(arr, shift):
    if shift == 0:    #incase, shift = 0, original array should be returned
        return
    n = len(arr)
    shift = shift % n   # shift > n ; shift = shift % len(array)

    Utility(arr, 0, shift-1)
    Utility(arr, shift, n-1)
    Utility(arr, 0, n-1)


# to print the changed array
def print_array(arr):
    for i in range(0, len(arr)):
        print(arr[i], end=" ")


# Driver's code
arr = [1, 2, 3, 4]
n = len(arr)
shift = 1

left_rotate(arr, shift)
print_array(arr)
