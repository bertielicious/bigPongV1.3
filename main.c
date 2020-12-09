/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 13 November 2020, 18:52
 */


#include "config.h"
#include "configPorts.h"
#include "configOsc.h"
#include "configSPI.h"
#include "init1_max7219.h"
#include "init2Max7219.h"
#include "configUsart.h"
#include "sendSPIbyte.h"
#include "sendNoSPIbyte.h"
#include "clearScreen.h"
#include "splashScreen.h"
#include "arrays.h"
#include "gameState.h"
#include "pong.h"
#include "writeMatrix.h"
void main(void) 
{
    configPorts();
    configOsc();
    configSPI();
    init1_max7219();
    init2Max7219();
    configUsart();
    printf("Hello Phil\n");
    uchar state = 0;
    uchar row, col = 0;
    
    
    
   /* for (row = 1; row<9; row++)
    {
    CS = LO;
    sendNoSPIbyte();
    
    sendSPIbyte(row, 1);
    CS = HI;
    
    CS = LO;
    sendSPIbyte(row, 128);
   
    sendNoSPIbyte();
    CS = HI;}*/
    
while(1)
{
    state = gameState(state);
    printf("state %d\n", state);
    
    
}    
}
   
