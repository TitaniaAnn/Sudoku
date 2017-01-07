#ifndef SUDOKUWINDOW_H
#define SUDOKUWINDOW_H

#include <QWidget>

class SudokuWindow : public QWidget
{
    Q_OBJECT

public:
    SudokuWindow();

private:
    QLabel *createLabel(const QString &text);
    // add Sudoku Board
    // add Sudoku number options
    // add Sudoku History
    // add Sudoku Options
};

#endif // SUDOKUWINDOW_H
