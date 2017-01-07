#pragma once
#include <iostream>
#include <vector>

class Board
{
private:
	struct Cell {
		int value;
		int move;
		bool valid;
		bool readonly;
		std::vector<int> possValues;

		Cell::Cell() {
			value = 0;
			move = 0;
			valid = false;
			readonly = false;
		}
	};
	std::vector<Cell> board;
	int boardSize;
	std::string validValues;

	void generateBoard(int level);
public:
	Board();
	Board(int level);
	virtual ~Board();
	void displayBoard();
	void displayPossible(int x, int y);
	bool updateCell(int x, int y, int value);
};

