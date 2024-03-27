// #include <Arduino.h>
// #include <ArduinoBLE.h>
// #include <Arduino_LSM9DS1.h>
// #include <Arduino_APDS9960.h>

// // put function declarations here:

// BLEService moviment_service("180C");

// BLEStringCharacteristic ble_acc("2A56", BLERead | BLENotify, 13);

// void setup() {

//   Serial.begin(9600);

//   if (!IMU.begin()) {
//     Serial.println("Failed to initialize IMU!");
//     while (1);
//   }

//   while (!Serial);
//   if(!BLE.begin()){
//     Serial.println("BLE failed to init");
//     while(1);
//   }

//   if (!APDS.begin()) {
//     Serial.println("Error initializing APDS-9960 sensor.");
//     while (1);
//   }

//   Serial.print("Acceleration sample rate = ");
//   Serial.print(IMU.accelerationSampleRate());
//   Serial.println(" Hz");
//   Serial.println();

//   BLE.setLocalName("Arduino periferical");
//   moviment_service.addCharacteristic(ble_acc);
  
//   BLE.setAdvertisedService(moviment_service);

//   BLE.addService(moviment_service);

//   BLE.advertise();
//   Serial.println("BLE active, waiting for connections...");

// }

// void loop() {

//   BLEDevice central = BLE.central();


//   if(central){

//     Serial.print("Connected to: ");
//     Serial.println(central.address());

//     while (central.connected())
//     {
      
//       ble_acc.writeValue("");
//     }

//   }

//   // Serial.print("Disconnected from ");
//   // Serial.println(central.address());

// }

 

// void readAcc(){

//   float x, y, z;

//     if(IMU.accelerationAvailable()){

//       IMU.readAcceleration(x, y, z);
//       Serial.print(x);
//       Serial.print('\t');
//       Serial.print(y);
//       Serial.print('\t');
//       Serial.println(z);
    
//     }
// }

// void gestureDetection(){

//   if(APDS.gestureAvailable()){

//       Serial.println("gesture detected");
//       int gesture = APDS.readGesture();

//       switch (gesture) {
//         case GESTURE_UP:
//           Serial.println("Detected UP gesture");
//           break;

//         case GESTURE_DOWN:
//           Serial.println("Detected DOWN gesture");
//           break;

//         case GESTURE_LEFT:
//           Serial.println("Detected LEFT gesture");
//           break;

//         case GESTURE_RIGHT:
//           Serial.println("Detected RIGHT gesture");
//           break;

//         default:
//           break;
//       }
//   }
// }
