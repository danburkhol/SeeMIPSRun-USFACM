// Example 1
// Declaring variables & Simple Arithmetic
int a = 6;
int b = 9;
int c = 0;

c = a + b;

// Example 2
// Comparison
// Loops and branching
while (c < 100) {
    c = c++;
}

// Example 3
// Comparison, arrays, and offset
// Say we're given array of integers named data[]
// Let's sort the first two items
if (data[0] > data[1]) {
    int temp = data[1];
    data[1] = data[0];
    data[0] = temp;
}
