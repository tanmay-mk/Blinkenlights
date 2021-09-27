################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/Blinkenlights.c \
../source/LED_INIT.c \
../source/LED_OFF.c \
../source/LED_ON.c \
../source/TOUCH_INIT.c \
../source/delay.c \
../source/infinite_loop.c \
../source/mtb.c \
../source/scheduler.c \
../source/semihost_hardfault.c \
../source/startup_sequence.c 

OBJS += \
./source/Blinkenlights.o \
./source/LED_INIT.o \
./source/LED_OFF.o \
./source/LED_ON.o \
./source/TOUCH_INIT.o \
./source/delay.o \
./source/infinite_loop.o \
./source/mtb.o \
./source/scheduler.o \
./source/semihost_hardfault.o \
./source/startup_sequence.o 

C_DEPS += \
./source/Blinkenlights.d \
./source/LED_INIT.d \
./source/LED_OFF.d \
./source/LED_ON.d \
./source/TOUCH_INIT.d \
./source/delay.d \
./source/infinite_loop.d \
./source/mtb.d \
./source/scheduler.d \
./source/semihost_hardfault.d \
./source/startup_sequence.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_MKL25Z128VLK4 -DCPU_MKL25Z128VLK4_cm0plus -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -D__REDLIB__ -I"C:\Users\ACER\Documents\MCUXpressoIDE_11.2.0_4120\workspace\PES_Assignments\Blinkenlights\board" -I"C:\Users\ACER\Documents\MCUXpressoIDE_11.2.0_4120\workspace\PES_Assignments\Blinkenlights\source" -I"C:\Users\ACER\Documents\MCUXpressoIDE_11.2.0_4120\workspace\PES_Assignments\Blinkenlights" -I"C:\Users\ACER\Documents\MCUXpressoIDE_11.2.0_4120\workspace\PES_Assignments\Blinkenlights\drivers" -I"C:\Users\ACER\Documents\MCUXpressoIDE_11.2.0_4120\workspace\PES_Assignments\Blinkenlights\CMSIS" -I"C:\Users\ACER\Documents\MCUXpressoIDE_11.2.0_4120\workspace\PES_Assignments\Blinkenlights\utilities" -I"C:\Users\ACER\Documents\MCUXpressoIDE_11.2.0_4120\workspace\PES_Assignments\Blinkenlights\startup" -Os -fno-common -g -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


