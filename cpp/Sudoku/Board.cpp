#include "Board.h"



Board::Board()
{
	boardSize = 9;
	validValues = "123456789";
	board.resize(boardSize * boardSize);
	generateBoard(0);
}

Board::Board(int level)
{
	boardSize = 9;
	validValues = "123456789";
	board.resize(boardSize * boardSize);
	generateBoard(level);
}

Board::~Board()
{
}

void displayBoard()
{

}

void displayPossible(int x, int y)
{

}

bool updateCell(int x, int y, int value)
{
	return false;
}