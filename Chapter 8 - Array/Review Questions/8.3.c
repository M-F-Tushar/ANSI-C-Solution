8.3 Write a for loop statement that initializes all the diagonal elements of an array to one and others to zero as shown below:
Code:

int arr[5][5];
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        if (i == j)
            arr[i][j] = 1;
        else
            arr[i][j] = 0;
    }
}

