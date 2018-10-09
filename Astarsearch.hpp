//AStar Search.hpp
#pragma once
#include <ctime>

class AStar
{
public:
	int a[3][3] = { 0 };
	int goal[3][3] = { 0 };
	int i, j;						//counters

	//cost so far, heuristic cost and total cost (f = g + h)
	int g, h, f = 0;
	AStar *parent;

	AStar() {}								//Constructor
	~AStar() {}								//Destructor
	void getHeuristic();
	bool setChildState();
	bool getSuccessors();
	void getTotalCost();
	bool isGoal();
	void solve();
	void print();
	bool isExplored(AStar &cur);
	void printPath(AStar *cur);
	bool operator<(const AStar &cur) const;
	bool operator==(const AStar &cur) const;
};