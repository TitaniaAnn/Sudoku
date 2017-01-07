#include "sudokuboard.h"

SudokuBoard::SudokuBoard(QWidget *parent) : QFrame(parent)
{
    setFrameStyle(QFrame::Panel | QFrame::Raised);
    setFocusPolicy(Qt::StrongFocus);
    isSolved = false;

}
