# Indoor-CO2
Create a simple indoor monitor with an Arduino UNO and SCD41
![image](https://user-images.githubusercontent.com/96729158/147523710-41eea02e-ac23-495e-b40c-ee02adfbc05a.png)

The SCD41 from Sensirion is a high quality Photoacoustic based CO₂ sensor capable of detecting 0 to 40000ppm with high accuracy over 400-5000ppm ±(40ppm+5%). In order to improve accuracy the SCD41 has integrated temperature and humidity sensing built-in. For additional accuracy the SCD41 also accepts ambient pressure readings!

Note: The SCD41 has an automatic self-calibration routine. Sensirion recommends 7 days of continuous readings with at least 1 hour a day of 'fresh air' for self-calibration to complete.

Wiring
--------------

![UNO](https://user-images.githubusercontent.com/96729158/147523812-1693865d-aabd-4736-85bf-a86367ae3237.png)

Please note that the sensor is not 5V tolerant. Use only 3.3V for powering the sensor.

Code
--------------
Download and install the SCD4x library [SCD4x_Arduino_Library-main] from the repository.  Copy the code from SCD41_Basic and upload it in your UNO, and that's it. You can see the data flowing in your serial monitor. 

![Screenshot 2021-12-28 001538](https://user-images.githubusercontent.com/96729158/147528861-be909d62-702c-4dc3-99ce-56a0d9ba2360.png)



Documentation
--------------

* **[Installing an Arduino Library Guide](https://learn.sparkfun.com/tutorials/installing-an-arduino-library)** - Basic information on how to install an Arduino library.
