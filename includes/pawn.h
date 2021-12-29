#ifndef PAWN_H
#define PAWN_H

/********************************************************************************************************************************************************************/
/********************************************************************************************************************************************************************/
/* Includes */
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

// None

/********************************************************************************************************************************************************************/
/********************************************************************************************************************************************************************/
/* Enum Definition */
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

enum class E_Pawn_Color : int
{
    WHITE = 1,
    BLACK = 2
};

/********************************************************************************************************************************************************************/
/********************************************************************************************************************************************************************/
/* Class Definition */
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

class Pawn
{
    public:
        explicit Pawn(const E_Pawn_Color color);
        ~Pawn();

        E_Pawn_Color Get_Color() const noexcept;
        void Return_Pawn() noexcept;

    protected:
        E_Pawn_Color _color;
};

#endif /* PAWN_H */
