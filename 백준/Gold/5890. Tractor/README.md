# [Gold IV] Tractor - 5890 

[문제 링크](https://www.acmicpc.net/problem/5890) 

### 성능 요약

메모리: 11156 KB, 시간: 76 ms

### 분류

0-1 너비 우선 탐색, 너비 우선 탐색, 데이크스트라, 그래프 이론, 그래프 탐색, 최단 경로

### 제출 일자

2024년 2월 13일 22:49:27

### 문제 설명

<p>After a long day of work, Farmer John completely forgot that he left his tractor in the middle of the field. His cows, always up to no good, decide to play a prank of Farmer John: they deposit N bales of hay (1 <= N <= 50,000) at various locations in the field, so that Farmer John cannot easily remove the tractor without first removing some of the bales of hay.</p>

<p>The location of the tractor, as well as the locations of the N hay bales, are all points in the 2D plane with integer coordinates in the range 1..1000. There is no hay bale located at the initial position of the tractor. When Farmer John drives his tractor, he can only move it in directions that are parallel to the coordinate axes (north, south, east, and west), and it must move in a sequence of integer amounts. For example, he might move north by 2 units, then east by 3 units. The tractor cannot move onto a point occupied by a hay bale.</p>

<p>Please help Farmer John determine the minimum number of hay bales he needs to remove so that he can free his tractor (that is, so he can drive his tractor to the origin of the 2D plane).</p>

### 입력 

 <ul>
	<li>Line 1: Three space-separated integers: N, and the (x,y) starting location of the tractor.</li>
	<li>Lines 2..1+N: Each line contains the (x,y) coordinates of a bale of hay.</li>
</ul>

### 출력 

 <ul>
	<li>Line 1: The minimum number of bales of hay Farmer John must remove in order to open up a path for his tractor to move to the origin.</li>
</ul>

