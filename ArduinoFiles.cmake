    include_directories(Arduino)
    
    # Список общих платфоремнно-назависимых файлов проекта
    SET(ArduinoFiles
        Arduino/SPI.cpp
        Arduino/WString.cpp
        Arduino/Wire.cpp
        Arduino/Serial.cpp
        # src/Core.cpp
        Arduino/main.cpp
        
        Arduino/wiringPi/piHiPri.c
        Arduino/wiringPi/wiringPi.c
    )

        




