# PES-Assignment-3


Answers to questions for extra credit: 

Q1: What is the address of your main() function?
Answer: Address of the main function is: 0000143B

Q2: What is the size in bytes of your delay() function, as shown by objdump?
Answer: 106 bytes

Q3:
Disassembly of delay() function:

25            Touch_Init();							                  //initializing touch sensor
          delay:
00000678:   push    {r4, r5, r6, lr}                      //push R4, R5, R6 from Link Register to Stack
0000067a:   movs    r4, r0                                //copy contents of R0 to R4. 
0000067c:   bl      0x620 <Touch_Init>                    //branch to the label "Touch_Init" (address0x620)

29        	polling = iterations/100;				              //total number of polls occurring in the given time period
00000680:   movs    r0, r4                                //copy contents of R4 to R0
00000682:   movs    r1, #100        ; 0x64                //move 100 to R1 (immediate addressing mode)
00000684:   bl      0x1610 <__aeabi_idivmod>              //branch to the label at address 0x1610
00000688:   movs    r6, #250        ; 0xfa                //move 250 to R6 (immediate addressing mode)
0000068a:   movs    r5, #250        ; 0xfa                //move 250 to R7 (immediate addressing mode)
0000068c:   movs    r4, r0                                //copy contents of R0 to R4

30        	while (polling--)
0000068e:   lsls    r6, r6, #2                            //Left shift operation. Left shift R6 twice and store in R6. Multiplies conetnt in R6 by 4. Sets conditional flag.
00000690:   lsls    r5, r5, #3                            //Left shift operation. Left shift R5 thrice and store in R5. Multiplies conetnt in R5 by 8. Sets conditional flag.
00000692:   subs    r4, #1                                //subtract 1 from R4
00000694:   bcs.n   0x6dc <delay+100>                     //branch to the address 0x6dc if carry is set
00000696:   pop     {r4, r5, r6, pc}                      //pop R4, R5, R6 from Stack Pointer to Program Counter

36        			{__asm volatile ("NOP");}
00000698:   nop     ; (mov r8, r8)                        //no operation (move contents of R8 to R8

35        			while (j--)					                      //iterations = polling * 100 * 1 msec (integer value 9244)
0000069a:   subs    r3, #1                                //subtract 1 from R3  
0000069c:   cmp     r3, #0                                //Compare R3 with 0
0000069e:   bne.n   0x698 <delay+32>                      //Branch to address 0x698 if R3 and 0 are not equal

32        		for(int k = 0; k<100; k++)
000006a0:   subs    r2, #1                                //subtract 1 from R2
000006a2:   cmp     r2, #0                                //compare R2 with 0
000006a4:   bne.n   0x6de <delay+102>                     //Branch to address 0x6de if R2 is not equal to 0

39        		touch_value = Touch_Scan_LH();		          //polling the touch value for change in color
000006a6:   bl      0x644 <Touch_Scan_LH>                 //Branch to Label "Touch_Scan_LH" (address: 0x644)
000006aa:   ldr     r3, [pc, #56]   ; (0x6e4 <delay+108>) //Load value from PC+56 into R3 (56 is offset)
000006ac:   str     r0, [r3, #0]                          //Store value from R3+0 in R0  (0 is offset)

41        		if (touch_value > 1000 && touch_value < 2000)
000006ae:   ldr     r2, [r3, #0]                          //load value from R3+0 in R2
000006b0:   cmp     r2, r6                                //compare value of R6 with R2
000006b2:   bls.n   0x6bc <delay+68>                      //if R6 is lower than or same as R2, branch to address location 0x6bc
000006b4:   ldr     r2, [r3, #0]                          //load value from R3+0 in R2
000006b6:   movs    r0, #1                                //move 1 to R0
000006b8:   cmp     r2, r5                                //Compare R5 with R2
000006ba:   bcc.n   0x6d6 <delay+94>                      //if carry flag is not set (clear) branch to addtess 0x6d6

46        		else if (touch_value > 2000 && touch_value <3500 )
000006bc:   ldr     r2, [r3, #0]                          //load value from R3+0 in R2
000006be:   cmp     r2, r5                                //compare value of R5 with R2
000006c0:   bls.n   0x6cc <delay+84>                      //if R5 is lower than or same as R2, branch to address location 0x6cc
000006c2:   ldr     r1, [r3, #0]                          //load value from R3+0 in R1
000006c4:   ldr     r2, [pc, #32]   ; (0x6e8 <delay+112>) //Load data from PC+32 location into R2
000006c6:   movs    r0, #2                                //mov 2 in R0
000006c8:   cmp     r1, r2                                //compare value of R2 with R1
000006ca:   bls.n   0x6d6 <delay+94>                      //if value of R2 is less than or same as R1, branch to location 0x6d6

51        		else if (touch_value > 3500)
000006cc:   ldr     r2, [r3, #0]                          //load value from R3+0 in R2
000006ce:   ldr     r3, [pc, #28]   ; (0x6ec <delay+116>) //Load data from PC+28 location into R3
000006d0:   cmp     r2, r3                                //compare values of R2 and R3
000006d2:   bls.n   0x692 <delay+26>                      //If R3 is less than or same as R2, branch to address location 0x692

54        			STATE_MACHINE(BLUE);			                //changing color to blue
000006d4:   movs    r0, #4                                //move 4 to R0
000006d6:   bl      0x6f4 <STATE_MACHINE>                 //branch to label "STATE_MACHINE" address label 0x6f4
000006da:   b.n     0x692 <delay+26>                      //branch to address location 0x692 (for loop iteration)
000006dc:   movs    r2, #100        ; 0x64                //move 100 to R2
000006de:   ldr     r3, [pc, #16]   ; (0x6f0 <delay+120>) //load value from PC+16 into R3
000006e0:   b.n     0x69a <delay+34>                      //branch to 0x69a (Goes to while (j--) loop)