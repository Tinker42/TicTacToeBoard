/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

// EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, sanityCheck)
{
	char t=turn;
	//int edge=2;
	assert((t=='O'&&toggleTurn()=='X')||(t=='X'&&toggleTurn()=='O'));
	
	
	assert((t==placePiece(0,0))&&((t=='O'&&turn=='X')||(t=='X'&&turn=='O')));
	assert((t==placePiece(0,1))&&((t=='O'&&turn=='X')||(t=='X'&&turn=='O')));
	assert((t==placePiece(0,2))&&((t=='O'&&turn=='X')||(t=='X'&&turn=='O')));
	assert((t==placePiece(1,0))&&((t=='O'&&turn=='X')||(t=='X'&&turn=='O')));
	assert((t==placePiece(1,1))&&((t=='O'&&turn=='X')||(t=='X'&&turn=='O')));
	assert((t==placePiece(1,2))&&((t=='O'&&turn=='X')||(t=='X'&&turn=='O')));
	assert((t==placePiece(2,0))&&((t=='O'&&turn=='X')||(t=='X'&&turn=='O')));
	assert((t==placePiece(2,1))&&((t=='O'&&turn=='X')||(t=='X'&&turn=='O')));
	assert((t==placePiece(2,2))&&((t=='O'&&turn=='X')||(t=='X'&&turn=='O')));
	
	/*assert(board[0,0]==placePiece(0,0));
	assert(board[0,1]==placePiece(0,1));
	assert(board[0,2]==placePiece(0,2));
	assert(board[1,0]==placePiece(1,0));
	assert(board[1,1]==placePiece(1,1));
	assert(board[1,2]==placePiece(1,2));
	assert(board[2,0]==placePiece(2,0));
	assert(board[2,1]==placePiece(2,1));
	assert(board[2,2]==placePiece(2,2));*/
	
	//assert(==placePiece(0,3));
}