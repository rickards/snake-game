################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/camera.cpp \
../src/main.cpp \
../src/snake.cpp \
../src/textura.cpp 

OBJS += \
./src/camera.o \
./src/main.o \
./src/snake.o \
./src/textura.o 

CPP_DEPS += \
./src/camera.d \
./src/main.d \
./src/snake.d \
./src/textura.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


