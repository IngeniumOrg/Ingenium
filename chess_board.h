#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include <vector>

enum class PieceType {
    None,
    Pawn,
    Rook,
    Knight,
    Bishop,
    Queen,
    King
};

enum class PieceColor {
    None,
    White,
    Black
};

struct ChessPiece {
    PieceType type;
    PieceColor color;
};

class ChessBoard {
public:
    ChessBoard();
    void initializeBoard();
    bool isValidMove(const std::pair<int, int>& from, const std::pair<int, int>& to) const;
    std::vector<std::pair<int, int>> getValidMoves(const std::pair<int, int>& position) const;

private:
    ChessPiece board[8][8];

    bool isWithinBounds(int x, int y) const;
    bool isSameColor(const std::pair<int, int>& from, const std::pair<int, int>& to) const;
    bool isOppositeColor(const std::pair<int, int>& from, const std::pair<int, int>& to) const;
};

#endif // CHESS_BOARD_H
