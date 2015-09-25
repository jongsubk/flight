#ifndef  __TYPEDEFINE_H__
#define  __TYPEDEFINE_H__


/******************************************/

typedef signed char			SINT8;
typedef signed short int	SINT16;
typedef signed int			SINT32;

typedef unsigned char		UINT8;
typedef unsigned short int	UINT16;
typedef unsigned int		UINT32;

typedef unsigned long		UFLOAT32;
typedef float				SFLOAT32;

/******************************************/

typedef struct
{
	UINT16		m_Length;
	UINT8 *		m_pString;
} STRING;

/******************************************/

typedef UINT8	BOOLEAN;

/******************************************/

//typedef BOOL (*Get_Member)();

/******************************************/

#endif	//endof __TYPEDEFINE_H__