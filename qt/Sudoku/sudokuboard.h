#ifndef SUDOKUBOARD_H
#define SUDOKUBOARD_H

#include <QWidget>
#include <QFrame>

class SudokuBoard : public QFrame
{
    Q_OBJECT
public:
    explicit SudokuBoard(QWidget *parent = 0);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
    void timerEvent(QTimerEvent *event) Q_DECL_OVERRIDE;

private:
    bool isSolved;
    void restartBoard();

};

#endif // SUDOKUBOARD_H
