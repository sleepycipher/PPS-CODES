arr=[10,20,30]

large = arr[0]
small = arr[0]

for element in arr:
    if element>large:
        large = element
    if element<small:
        small = element
print("Largest: ", large)
print("Smallest: ", small)