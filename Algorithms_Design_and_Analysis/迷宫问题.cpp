//#include <iostream>
//#include <cstring> 
//
//const int N = 5;
//
//int maze[N][N] = { 0 };
//
//bool visited[N][N];
//int path[N * N][2];
//int shortestPath[N * N][2];
//int pathLen = 0;
//int shortestPathLen = N * N;
//
//
//int dirX[4] = { -1, 1, 0, 0 };
//int dirY[4] = { 0, 0, -1, 1 };
//
//
//void findShortestPath(int x, int y) {
//	path[pathLen][0] = x;
//	path[pathLen][1] = y;
//	pathLen++;
//	if (x == N - 1 && y == N - 1) {
//		if (pathLen < shortestPathLen) {
//			shortestPathLen = pathLen;
//			for (int i = 0; i < pathLen; ++i) {
//				shortestPath[i][0] = path[i][0];
//				shortestPath[i][1] = path[i][1];
//			}
//		}
//	}
//	else {
//		for (int i = 0; i < 4; ++i) {
//			int newX = x + dirX[i];
//			int newY = y + dirY[i];
//			if (newX >= 0 && newX < N && newY >= 0 && newY < N && !visited[newX][newY] && maze[newX][newY] == 0) {
//				visited[newX][newY] = true;
//
//				findShortestPath(newX, newY);
//
//				visited[newX][newY] = false;
//			}
//		}
//	}
//	pathLen--;
//}
//
//int main() {
//	std::memset(visited, false, sizeof(visited));
//	visited[0][0] = true;
//	for (int i = 0; i < 5; i++)
//		for (int j = 0; j < 5; j++)
//			std::cin >> maze[i][j];
//	findShortestPath(0, 0);
//	for (int i = 0; i < shortestPathLen; ++i) {
//		std::cout << "(" << shortestPath[i][0] << ", " << shortestPath[i][1] << ")" << std::endl;
//	}
//	return 0;
//}
