#ifndef ___OLED_H___
#define ___OLED_H___

#define SIZE 16
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF 
#define X_WIDTH 	128
#define Y_WIDTH 	64

void OLED_Port_Init(void);
void SPI_Port_Init(void);
void OLED_Reset(void);

void OLED_WriteCommond(unsigned char commond);
void OLED_WriteData(unsigned char dat);

// Set the position to write data in page addressing mode
// Page: 0-7
// Col : 0-127
void OLED_Set_Pos(unsigned char page, unsigned char col);

// Clear every on the screen by writing 0 into GDDRAM
void OLED_Clear(void);

// Draw base on gui buffer
void OLED_DrawWindow(void);

// Empty gui buffer
void OLED_ClearBuf(void);

// Clear Page
void OLED_ClearPage(uint8_t page);

// Show specific character, pass in the char following ASCII
void OLED_showChar_6x8(uint8_t chr);

#endif