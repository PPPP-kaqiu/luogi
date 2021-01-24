//ca//the solution of the linear equation of ternary
//with the dichonomy to solve problem
//demand the root has at least 1 interval
#include<stdio.h>
#include<malloc.h>
#pragma warning (disable:4996);
long long* space(long long m) {
	//apply for a space to store 
	long long *players;
	players = (long long*)malloc(sizeof(long long) * (m+1));
	for (long long i = 0; i < m + 1; i++) players[i] = 0;
	return players;
}
int main(void) {
	long long teachers, players,forecast,*playerarray,*simulation,*consequence;
	long long i, j, number=0, counter = 0;//statistic the number of the first 
	scanf("%lld%lld%lld", &teachers, &players, &forecast);
	playerarray = space(players);//set the array for the players
	simulation = space(teachers);//set the array for th esimulation of the teachers
	consequence = space(players);
	for (i=1; i < teachers+1; i++) {
		scanf("%lld", &simulation[i]);//set the players of every teacher
		for (j = 0; j < simulation[i];j++) {
			scanf("%lld", &number);
			playerarray[number]++;//statistic the weight of every players
		}
	}
	j = 1;
	for (i = 1; i < players + 1; i++) {
		if (playerarray[i] == forecast) {
			counter++;
			consequence[j++] = i;
		}
	}
	printf("%lld\n", counter);
	for (i = 1; i < counter + 1; i++)printf("%lld ", consequence[i]);
	return 0;
}