#include "chess_board.h"

ChessBoard::ChessBoard() {
    initializeBoard();
}

void ChessBoard::initializeBoard() {
    // Set up the initial board configuration
    // ... (Initialize the board array with pieces)
}

bool ChessBoard::isValidMove(const std::pair<int, int>& from, const std::pair<int, int>& to) const {
    if (!isWithinBounds(from.first, from.second) || !isWithinBounds(to.first, to.second))
        return false;

    const ChessPiece& piece = board[from.first][from.second];

    if (piece.type == PieceType::None)
        return false;

    // Check if the move is valid for the specific piece type
    // ... (Implement the logic to validate the move based on the piece type)

    return true; // Replace this with the appropriate validation logic
}

std::vector<std::pair<int, int>> ChessBoard::getValidMoves(const std::pair<int, int>& position) const {
    std::vector<std::pair<int, int>> validMoves;

    if (!isWithinBounds(position.first, position.second))
        return validMoves;

    const ChessPiece& piece = board[position.first][position.second];

    if (piece.type == PieceType::None)
        return validMoves;

    // Generate and add all valid moves for the specific piece type
    // ... (Implement the logic to generate and add valid moves based on the piece type)

    return validMoves; // Replace this with the appropriate logic to generate valid moves
}

bool ChessBoard::isWithinBounds(int x, int y) const {
    return (x >= 0 && x < 8 && y >= 0 && y < 8);
}

bool ChessBoard::isSameColor(const std::pair<int, int>& from, const std::pair<int, int>& to) const {
    const ChessPiece& pieceFrom = board[from.first][from.second];
    const ChessPiece& pieceTo = board[to.first][to.second];
    return (pieceFrom.color != PieceColor::None && pieceFrom.color == pieceTo.color);
}

bool ChessBoard::isOppositeColor(const std::pair<int, int>& from, const std::pair<int, int>& to) const {
    const ChessPiece& pieceFrom = board[from.first][from.second];
    const ChessPiece& pieceTo = board[to.first][to.second];
    return (pieceFrom.color != PieceColor::None && pieceFrom.color != pieceTo.color);
}
