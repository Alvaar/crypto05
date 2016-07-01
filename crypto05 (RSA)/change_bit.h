#pragma once

//==========================================================================
// ��������� 32-� ������� ����� �� ������ ���� �� ������� (������ BIG ENDIAN)
// BIG ENDIAN - ������ ���� ������ ����� ������� ������ � �����
// ���������:
//   ulong n  - 32-� ������ �����, � ������� ������������ ������
//   uchar* b - ������� ����� ����
//   ulong i  - �������, � ������� ���������� ������ ������ �� �������� ������
#ifndef GET_ULONG_BE
#define GET_ULONG_BE(n,b,i)                     \
{                                               \
    (n) = ( (unsigned long) (b)[(i)    ] << 24 )        \
        | ( (unsigned long) (b)[(i) + 1] << 16 )        \
        | ( (unsigned long) (b)[(i) + 2] <<  8 )        \
        | ( (unsigned long) (b)[(i) + 3]       );       \
}
#endif

//==========================================================================
// ������ 32-� ������� ����� � ����� ���� � ������ ������� (������ BIG ENDIAN)
// ���������:
//   ulong n  - 32-� ������ �����, �� ������� �������� ������
//   uchar* b - �������� ����� ����
//   ulong i  - �������, � ������� ���������� ������ ������ � �������� �����
#ifndef PUT_ULONG_BE
#define PUT_ULONG_BE(n,b,i)                     \
{                                               \
    (b)[(i)    ] = (unsigned char) ( (n) >> 24 );       \
    (b)[(i) + 1] = (unsigned char) ( (n) >> 16 );       \
    (b)[(i) + 2] = (unsigned char) ( (n) >>  8 );       \
    (b)[(i) + 3] = (unsigned char) ( (n)       );       \
}
#endif