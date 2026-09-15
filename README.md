# 🌦️ BMP180 Temperature, Pressure & Altitude with Arduino

A complete beginner-friendly Arduino project for interfacing the **BMP180 Barometric Pressure Sensor** to measure **Temperature**, **Atmospheric Pressure**, and **Altitude** using the I²C interface.

This repository is ideal for students, makers, IoT enthusiasts, and embedded engineers who want to learn BMP180 sensor interfacing from scratch.

---

# 📌 Features

* 🌡 Read Temperature (°C)
* 🌍 Read Atmospheric Pressure (Pa)
* ⛰ Calculate Altitude (m)
* 📟 Serial Monitor Output
* 🔌 I²C Communication
* 🧩 Beginner Friendly Code
* 📚 Well Commented Source Code
* ⚡ Easy to Interface with Arduino

---

# 📂 Repository Structure

```text
BMP180_Temperature_Pressure_Altitude_Arduino
│
├── BMP180_Arduino.ino
├── BMP180_Wiring.png
├── README.md
└── Images
```

---

# 🛠 Hardware Required

* Arduino UNO / Nano / Mega
* BMP180 Sensor Module
* Breadboard
* Jumper Wires
* USB Cable

---

# 🔌 Wiring Diagram

| BMP180 | Arduino UNO |
| ------ | ----------- |
| VIN    | 5V*         |
| GND    | GND         |
| SDA    | A4          |
| SCL    | A5          |

> **Note:** Many BMP180 breakout boards include an onboard regulator and level shifter, allowing them to work with a 5V Arduino. Some bare modules require **3.3V**, so check your specific module before connecting power.

---

# 🖼 Circuit Diagram

<p align="center">
  <img src="https://raw.githubusercontent.com/Surya-8948/BMP180-_Temperature_Pressure_Altitude-_Arduino/main/BMP180_Arduino.png" width="750">
</p>

---

# 📚 Required Libraries

Install the following libraries from **Arduino Library Manager**:

* Adafruit BMP085 Library (Compatible with BMP180)
* Adafruit Unified Sensor

The commonly used Adafruit BMP085 library fully supports the BMP180 sensor.

---

# 🚀 Example Output

```text
Temperature : 29.15 °C

Pressure : 100845 Pa

Altitude : 42.37 m
```

---

# 📖 Functions Used

```cpp
bmp.begin()

bmp.readTemperature()

bmp.readPressure()

bmp.readAltitude()

bmp.readSealevelPressure()
```

---

# 🌍 Applications

* Weather Station
* Altitude Measurement
* Drone Projects
* IoT Monitoring
* Environmental Monitoring
* Smart Agriculture
* Home Automation
* Data Logging

---

# ⚙ Sensor Specifications

| Parameter         | Value                                                        |
| ----------------- | ------------------------------------------------------------ |
| Interface         | I²C                                                          |
| I²C Address       | 0x77                                                         |
| Temperature Range | -40°C to +85°C                                               |
| Pressure Range    | 300 hPa – 1100 hPa                                           |
| Supply Voltage    | 1.8V–3.6V (sensor IC); many breakout boards support 5V input |
| Resolution        | High Precision                                               |

Specifications vary between the bare sensor and breakout boards with onboard regulators.

---

# 📈 Measured Parameters

✅ Temperature

✅ Atmospheric Pressure

✅ Altitude

---

# 🎓 Perfect For

* Beginners
* Diploma Students
* B.Tech Students
* Embedded Systems
* IoT Projects
* Electronics Engineering
* Robotics Projects

---

# 🚀 Future Improvements

* OLED Display
* LCD Display
* ESP32 Support
* Blynk IoT
* ThingSpeak Cloud
* SD Card Data Logging
* Weather Dashboard
* Web Server Integration

---

# 🤝 Contributing

Contributions are welcome.

1. Fork the repository
2. Create a new branch
3. Commit your changes
4. Submit a Pull Request

---

# 👨‍💻 Author

**Surya Mani Bajpai**

Electronics Engineer | Embedded Systems | IoT | Robotics | Arduino | ESP32 | PCB Design

---

# ⭐ Support

If you found this project helpful:

⭐ Star this repository

🍴 Fork it

📢 Share it with others

---

# 📜 License

This project is released under the **MIT License**.
