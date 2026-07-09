#An array of 5 numbers has given. print the numbers between the lowest and highest number of this array which are not exist.
arr=[4,8,9,10,2]

largest=arr[0]
smallest=arr[0]

for num in arr:
    if num>largest:
        largest=num
    if num<smallest:
        smallest=num
print("Largest= ",largest)
print("Smallest= ",smallest)

for num in range(smallest, largest + 1):
    bit=True
    for i in arr:
        if num==i:
            bit=False
    if bit==True:
        print(num)
