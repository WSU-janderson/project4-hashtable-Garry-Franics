[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/7RAFczHS)
# Project 4 - HashTable

Project description can be found [in the repo](Project4_HashTable.pdf)

Place your complexity analysis below.

### Insert

In the best case the key can be inserted at its home bucket with no probing for a time complexity of O(1)

In the average case a place to insert is found in 2 probes, a constant amount, so the time complexity is also O(1)

In the worst case the probe goes through half of the table which is n/2, so the time complexity is 0(n)

### Remove

In the best case the key is in the home bucket and can be instantly removed for a time complexity of O(1)

In the average case the key is found in 2 probes, which is a constant number, so the time complexity is another O(1)

In the worst case the probe checks half the table which takes n/2, so the time complexity is O(n)

### Contains

In the best case the key is found at its home bucket with no probing giving a time complexity of O(1)

In the average case the key is found in 2 probes, which is a constant amount, so the time complexity is also O(1)

In the worst case the probe goes through half of the table which is n/2, so the time complexity is O(n)

### Get

In the best case the key is found at its home bucket and can have its value returned instantly for a time complexity of
O(1)

In the average case the key is found in 2 probes. This being a constant number means the time complexity is also O(1)

In the worst case half the table is probed before the function ends which is n/2, so the time complexity is O(n)

### Operator[]

In the best case the key is at the home bucket letting the value be referenced instantly for a time complexity of O(1)

In the average case 2 probes need to be made before the key is found, this is a constant number so the time complexity
is also O(1)

In the worst case half the table will be probed before the key is found which is n/2 which gives a time complexity of
O(n)

---