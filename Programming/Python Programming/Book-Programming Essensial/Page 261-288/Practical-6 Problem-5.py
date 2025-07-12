#Problem Name: A program to determine the transporous matrix of a matrix.
matrix = [[1,2], [3,4],[5,6]]
rmatrix = [[0,0], [0,0],[0,0]]
for i in range(len(matrix)):
    for j in range(len(matrix[0])):
        rmatrix[i][j] = matrix[i][j]

for r in rmatrix:
    print(r)