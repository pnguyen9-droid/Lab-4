# Lab 4 Phillip Nguyen

## main.c 

### description
Reads integers from a file, stores them in an array, calls the assembly function to compute the sum, and prints the result.

## sum.s

### description
Assembly function that loops through the array, adds all integers, and returns the total sum.

### Compile
gcc -no-pie main.c sum.s -o lab4

### Run
./lab4 data.txt

## data.txt

50
150
121
87
199
34
176
98
45
162
73
188
54
129
200
17
94
183
60
142
109
31
170
76
155
48
191
66
137
22
158
81
120
39
174
92
143
68
186
25
134
99
167
57
180
72
146
113
41
159
88
