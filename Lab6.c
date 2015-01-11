#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int i, j;

//function to print board
void printBoard (char **board, int n) {

for (i = 0; i < n; i ++) {
	for (j = 0; j < n; j ++)
		printf("%c", board[i][j]);
			printf("\n"); }

}


//function to check horizontal win
bool winCheck1 (char **board, int n) {

for (i = 0; i < n; i ++) 
	for (j = 0; j + 5 < n; j++) {
		if (board [i][j] != 'U' && board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 2] == board[i][j + 3] && board[i][j + 3] == board[i][j + 4] && board[i][j + 4] == board[i][j + 5]) {
			if (board[i][j] == 'B') printf("Black wins.\n");
				else printf("White wins.\n"); return true; } }
return false;			
}

//function to check vertical win
bool winCheck2 (char **board, int n) {

for (i = 0; i < n; i ++) 
	for (j = 0; j + 5 < n; j++) {
		if (board [j][i] != 'U' && board[j][i] == board[j + 1][i] && board[j + 1][i] == board[j + 2][i] && board[j + 2][i] == board[j + 3][i] && board[j + 3][i] == board[j + 4][i] && board[j + 4][i] == board[j + 5][i]) {
			if (board[j][i] == 'B') printf("Black wins.\n");
				else printf("White wins.\n"); return true; } }

return false;
}

//function to check diagonal 1 win
bool winCheck3 (char **board, int n) {

for (i = 0; i + 5 < n; i ++)
	for (j = 0; j + 5 < n; j ++)
		if (board[i][j] != 'U' && board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2]  && board[i + 2][j + 2] == board[i + 3][j + 3] && board[i + 3][j + 3] == board[i + 4][j + 4] && board[i + 4][j + 4] == board[i + 5][j + 5]) {
		if (board[i][j] == 'B') printf("Black wins.\n");
			else printf("White wins.\n"); return true; }
return false;
}

//function to check diagnoal 2 win
bool winCheck4 (char **board, int n) {

for (i = 0; i + 5 < n; i ++)
	for (j = n - 1; j - 5 >= 0; j --)
		if (board[i][j] != 'U' && board[i][j] == board[i + 1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2]  && board[i + 2][j - 2] == board[i + 3][j - 3] && board[i + 3][j - 3] == board[i + 4][j - 4] && board[i + 4][j - 4] == board[i + 5][j - 5]) {
		if (board[i][j] == 'B') printf("Black wins.\n");
			else printf("White wins.\n"); return true; }

return false;
}

//contiguous stones - 8 checks in total (2 for vertical, 2 for horizontal, 2 for diagonal 1, 2 for diagonal 2

int findLongest (char **board, int size, int row, int col) {

int count[8] = {1,1,1,1,1,1,1,1};
int max = 0;

//North Count
for (i = row, j = col; i - 1 >= 0 && board[i - 1][j] == board[i][j]; i --)
	if (board[i][j] == board[i - 1][j])
		count[0] ++;

//South Count
for (i = row, j  = col; i + 1 < size && board[i + 1][j] == board[i][j]; i ++)
	if (board[i][j] == board[i + 1][j])
		count[1] ++; 

count[0] = count[0] + count[1] - 1;

//West Count
for (i = row, j = col; j - 1 >= 0 && board[i][j - 1] == board[i][j]; j --)
	if (board[i][j] == board[i][j - 1])
		count[2] ++;

//East Count
for (i = row, j = col; j + 1 < size && board[i][j + 1] == board[i][j]; j ++)
	if (board[i][j] == board[i][j + 1])
		count [3] ++;

count[1] = count[2] + count[3] - 1;

//North West Count

for (i = row, j = col; i + 1 < size && j + 1 < size && board[i + 1][j + 1] == board[i][j]; i ++, j ++)
	if (board[i][j] == board [i + 1][j + 1])
		count[4] ++;

for (i = row, j = col; i - 1 >= 0 && j - 1 >= 0 && board[i][j] == board [i - 1][j - 1]; i --, j --)
	if (board[i][j] == board [i - 1][j - 1])
		count[5] ++;

count[2] = count[4] + count[5] - 1;
//two diagnoal 2 counts
for (i = row, j = col; i - 1 >= 0 && j + 1 < size && board[i][j] == board[i - 1][j + 1]; i --, j ++)
	if (board[i][j] == board [i - 1][j + 1])
		count[6] ++;

for (i = row, j = col; i + 1 < size && j - 1 >= 0 && board[i][j] != 'U' && board[i][j] == board[i + 1][j -1]; i ++, j --)
	if (board[i][j] == board [i + 1][j - 1])
		count[7] ++;

count[3] = count[6] + count[7] - 1;
//find longest count

for (i = 0; i < 4; i ++) {

	if (count[i] >= max)
		max = count[i];
	else max = max; }


return max; 

}



//main function, start with variable initialization
int main(void) {

int n, row, col;

char unit;

char **board;

printf("Enter board dimensions (n): ");
scanf("%d", &n);

//dynamically allocate memory
board = (char **)malloc(n * sizeof(char *));

for (i = 0; i < n; i++)
	board[i] = (char *)malloc(n*sizeof(char));

for (i = 0; i < n; i++)
	for (j = 0; j < n; j++)
		board[i][j] = 'U';

printBoard (board, n);


//demand input to begin loop
printf("Enter stone (B|W): ");
scanf(" %c", &unit);


//use loop to gain all entries
while (unit != 'E') {

printf("Enter position (ROW COL): ");
scanf("%d %d", &row, &col);

if (board[row][col] == 'U') {

board[row][col] = unit;

printBoard (board, n); 

printf("Enter stone (B|W): ");
scanf(" %c", &unit);  }

else { printf("Position is taken, try another move.\n");

printBoard (board, n);

printf("Enter stone (B|W): ");
scanf(" %c", &unit); }

}

//call functions to determine winner (four checks - horizontal (1), vertical (2), diagonal (3), diagonal (4))
if (winCheck1 (board, n) || winCheck2 (board, n) || winCheck3 (board, n) || winCheck4 (board, n)) ;
else printf("No winner so far.\n");

printf("Enter an occupied position to check for contiguous stones (ROW COL): ");
scanf("%d %d", &row, &col);

//loop for finding longest sequence
while (row != -1 && col != -1) {

printf("Number of contiguous stones: %d\n", (findLongest (board, n, row, col)));

printf("Enter an occupied position to check for contiguous stones (ROW COL): ");
scanf("%d %d", &row, &col);

}

return 0;

}



