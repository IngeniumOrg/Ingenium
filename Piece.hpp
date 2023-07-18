#pragma once


enum PieceType {
	King,
	Queen,
	Rook,
	Bishop,
	Knight,
	Pawn
};

enum PieceColor {
	White,
	Black
};


class Piece {
public:
	PieceType m_pieceType;
	PieceColor m_pieceColor;

	virtual bool IsValidMove(Board board, int initialPosition, int finalPosition) {

	}
};