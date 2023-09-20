################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/LCD_1.c \
../APP/LED.c \
../APP/PUCH_BUTTON_1.c \
../APP/PUCH_BUTTON_2.c \
../APP/Sven_Segment.c 

OBJS += \
./APP/LCD_1.o \
./APP/LED.o \
./APP/PUCH_BUTTON_1.o \
./APP/PUCH_BUTTON_2.o \
./APP/Sven_Segment.o 

C_DEPS += \
./APP/LCD_1.d \
./APP/LED.d \
./APP/PUCH_BUTTON_1.d \
./APP/PUCH_BUTTON_2.d \
./APP/Sven_Segment.d 


# Each subdirectory must supply rules for building sources it contributes
APP/%.o: ../APP/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


