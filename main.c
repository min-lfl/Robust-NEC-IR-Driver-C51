#include <stc15w408as.H>

#include <RedWAI.H>
#include <UART.H>

unsigned char Code=0;		//红外接收缓存区

void main(){
	RedWAI_init();
	Uart_Init();	
	
	while(1){
		
		Code=get_Red_Data();
		//如果接收到就打印
		if(Code!=0){
			printf("%d \t\n",(int)Code);
		}
	}
}


