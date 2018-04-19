#pragma once
typedef unsigned char BYTE;

ref class WorkWithBinary
{
  public: System::Drawing::Bitmap^ image1;

  public: bool GetNBitFromByte( BYTE B, int n )
   /* Отримуємо значення N-ого біта в байті B */
   /* Повертає 1 або 0 (залежно від значення біта) */
  {
   int k = 256;

   for( int i = 0; i < n; i++ ) k /= 2;

   if( (B & k) != 0 ) return 1;
   else return 0;
  }
  public: bool GetNBitFromUInt( unsigned short int B, int n ) //Для довжини повідомлення
  {
   unsigned int k = 65536;

   for( int i = 0; i < n; i++ ) k /= 2;

   if( (B & k) != 0 ) return 1;
   else return 0;
  }
  public: BYTE WriteBitToByte( bool Bit, BYTE B )
   /* Записує в байт B на останню позицію біт Bit */
  {
   BYTE A = 00000001;
   BYTE Result = B;

   if( Bit == GetNBitFromByte( B, 8 ) ) return B;
   else if( Bit == 1 ) return Result = Result | A;
   else if( Bit == 0 ) return B - A;

   return '\0';
  }

  public: BYTE BinaryToByte( bool *arr )
   /* Собирает из массива битов один целый байт и возвращает его.
   Входной параметр: массив из восьми элементов, соответсвтующих
   битам Байта
   */
  {
   BYTE Mask = 00000001;
   BYTE Result = 00000000;
   BYTE Mask2;

   int j = 0;
   for( int i = 7; i > -1; i--, j++ )
   {
    if( arr[i] == 1 )
    {
     Mask2 = (Mask << (j));
     Result = Result | Mask2;
    }
   }
   return Result;
  }
  public: unsigned short int BinaryToUSInt( bool *arr ) //Для довжини повідомлення
   /* Собирает из массива битов один целый байт и возвращает его.
   Входной параметр: массив из 32 элементов, соответсвтующих
   битам unsigned int
   */
  {
   unsigned short int Mask = 0000000000000001;
   unsigned short int Result = 0000000000000000;
   unsigned short int Mask2;

   int j = 0;
   for( int i = 15; i > -1; i--, j++ )
   {
    if( arr[i] == 1 )
    {
     Mask2 = (Mask << (j));
     Result = Result | Mask2;
    }
   }
   return Result;
  }

  WorkWithBinary(){};
};

