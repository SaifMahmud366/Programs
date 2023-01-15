array = []
n = int(input("Enter N = "))

print("Enter Value :: ")
for i in range(0,n):
    element = int(input())
    array.append(element)

for i in range(n-1):
    swapped = False
    for j in range(n-1):
        if array[j] > array[j+1]:
            temp = array[j]
            array[j] = array[j+1]
            array[j+1] = temp
            swapped = True
    if not swapped:
        break

print("After Sorting = ",array)

"""
import time
start_time = time.time()
print("Execution time : %s seconds " % (time.time() - start_time))
"""
