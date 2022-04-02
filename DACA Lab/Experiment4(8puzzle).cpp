#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm> 
#include <math.h> 
#include <tuple> 

using namespace std;

class compare
{
public:
	bool operator()(tuple<int, int, vector<vector<int>>> matrix1, tuple<int, int, vector<vector<int>>> matrix2)
	{
		return get<0>(matrix1) + get<1>(matrix1) > get<0>(matrix2) + get<1>(matrix2);
	}
};


void general_search(vector< vector<int> > matrix, int choice_num);
int manhattan(vector<vector<int>> node);
bool goalcheck(vector< vector<int> > matrix);
void expand(tuple<int, int, vector<vector<int>>> node, priority_queue< tuple<int, int, vector<vector<int>>>, vector<tuple<int, int, vector<vector<int>>>>, compare >& nodes, int choice_num);
int total;


void general_search(vector< vector<int> > matrix, int choice_num)
{
	int h_n = 0;
	if (choice_num == 1)
	{
		h_n = 0;
	}
	else if (choice_num == 2)
	{
		h_n = manhattan(matrix);
	}

	tuple< int, int, vector<vector<int>> > node(h_n, 0, matrix);
	priority_queue< tuple<int, int, vector<vector<int>>>, vector<tuple<int, int, vector<vector<int>>>>, compare > nodes;
	nodes.push(node);

	cout << "Expanding the state" << endl;
	tuple<int, int, vector<vector<int>>> temp = nodes.top();
	vector<vector<int>> temp1 = get<2>(temp);
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
			cout << temp1[y][x] << " ";
		cout << endl;
	}

	int counter = -1;
	int max_size = 0;

	while (counter != 0 && counter != 1)
	{
		if (nodes.empty())
		{
			cout << "Solution not found" << endl;
			counter = 0;
			return;
		}
		temp = nodes.top();
		get<2>(node) = get<2>(temp);
		nodes.pop();

		if (goalcheck(get<2>(node)) == true)
		{
			cout << "Goal reached" << endl;
			temp1 = get<2>(node);
			for (int y = 0; y < 3; y++)
			{
				for (int x = 0; x < 3; x++)
					cout << temp1[y][x] << " ";
				cout << endl;
			}
			cout << total << " nodes are expanded." << endl;
			cout << "The maximum number of nodes in the queue at any one time is " << max_size << endl;
			cout << "Depth of goal node is " << get<1>(temp) << "\n\n\n";
			counter = 1;
			return;
		}
		expand(temp, nodes, choice_num);
		int curr_size = nodes.size();
		max_size = max(max_size, curr_size);

		temp = nodes.top();
		temp1 = get<2>(temp);

		if (choice_num == 2)
			cout << "The best state to expand with a g(n) = " << get<1>(temp) << " and h(n) = " << get<0>(temp) << " is " << endl;
		else
			cout << "The best state to expand with a g(n) = " << get<1>(temp) << endl;

		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
				cout << temp1[y][x] << " ";
			cout << endl;
		}
	}
}

bool goalcheck(vector< vector<int> > matrix)
{
	vector< vector<int> > goal;
	int num_col = 3;
	int num_row = 3;
	int init_val = 0;
	goal.resize(num_col, vector<int>(num_row, init_val));
	goal[0][0] = 1;
	goal[0][1] = 2;
	goal[0][2] = 3;
	goal[1][0] = 8;
	goal[1][1] = 0;
	goal[1][2] = 4;
	goal[2][0] = 7;
	goal[2][1] = 6;
	goal[2][2] = 5;

	if (matrix == goal)
	{
		return true;
	}
	else if (matrix != goal)
	{
		return false;
	}
}

void expand(tuple<int, int, vector<vector<int>>> node, priority_queue< tuple<int, int, vector<vector<int>>>, vector<tuple<int, int, vector<vector<int>>>>, compare >& nodes, int choice_num)
{
	vector<vector<int>> matrix = get<2>(node);
	int blank_x = -1;
	int blank_y = -1;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (matrix[y][x] == 0)
			{
				blank_x = x;
				blank_y = y;
			}
		}
	}

	vector<vector<int>> copy = matrix;
	int h_n = 0;
	tuple< int, int, vector<vector<int>> > new_node;
	if (blank_y != 0)
	{
		swap(copy[blank_y][blank_x], copy[blank_y - 1][blank_x]);
		if (choice_num == 1)
		{
			h_n = 0;
		}
		else if (choice_num == 2)
		{
			h_n = manhattan(copy);
		}

		get<0>(new_node) = h_n;
		get<1>(new_node) = get<1>(node) + 1;
		get<2>(new_node) = copy;
		total++;
		nodes.push(new_node);
	}

	copy = matrix;
	if (blank_y != 2)
	{
		swap(copy[blank_y][blank_x], copy[blank_y + 1][blank_x]);
		if (choice_num == 1)
		{
			h_n = 0;
		}
		else if (choice_num == 2)
		{
			h_n = manhattan(copy);
		}

		get<0>(new_node) = h_n;
		get<1>(new_node) = get<1>(node) + 1;
		get<2>(new_node) = copy;
		total++;
		nodes.push(new_node);
	}

	copy = matrix;
	if (blank_x != 2)
	{
		swap(copy[blank_y][blank_x], copy[blank_y][blank_x + 1]);
		if (choice_num == 1)
		{
			h_n = 0;
		}
		else if (choice_num == 2)
		{
			h_n = manhattan(copy);
		}

		get<0>(new_node) = h_n;
		get<1>(new_node) = get<1>(node) + 1;
		get<2>(new_node) = copy;
		total++;
		nodes.push(new_node);
	}

	copy = matrix;
	if (blank_x != 0)
	{
		swap(copy[blank_y][blank_x], copy[blank_y][blank_x - 1]);
		if (choice_num == 1)
		{
			h_n = 0;
		}
		else if (choice_num == 2)
		{
			h_n = manhattan(copy);
		}

		get<0>(new_node) = h_n;
		get<1>(new_node) = get<1>(node) + 1;
		get<2>(new_node) = copy;
		total++;
		nodes.push(new_node);
	}
}

int manhattan(vector<vector<int>> node)
{
	int sum = 0;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			int val = node[y][x];
			if (val != 0)
			{
				int goal_x = (val - 1) % 3;
				int goal_y = (val - 1) / 3;
				sum = sum + abs(x - goal_x) + abs(y - goal_y);
			}
		}
	}
	return sum;
}

int main()
{
	vector< vector<int> > matrix;
	vector< vector<int> > goal;

	matrix.resize(3, vector<int>(3, 0));
	matrix[0][0] = 2;
	matrix[0][1] = 0;
	matrix[0][2] = 3;
	matrix[1][0] = 1;
	matrix[1][1] = 8;
	matrix[1][2] = 4;
	matrix[2][0] = 7;
	matrix[2][1] = 6;
	matrix[2][2] = 5;

	goal.resize(3, vector<int>(3, 0));
	goal[0][0] = 1;
	goal[0][1] = 2;
	goal[0][2] = 3;
	goal[1][0] = 8;
	goal[1][1] = 0;
	goal[1][2] = 4;
	goal[2][0] = 7;
	goal[2][1] = 6;
	goal[2][2] = 5;


	cout << "Initial node " << endl;

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}

	cout << "\nGoal node " << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", goal[i][j]);
		printf("\n");
	}

	cout << "\n\nUsing Uniform Cost Search\n";
	general_search(matrix, 1);
	cout << "Using A* with the Manhattan distance heuristic\n";
	general_search(matrix, 2);

	return 0;
}