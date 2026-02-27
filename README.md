# IoT-Based Air Quality Categorization using TinyML and XGBoost

## Project Overview

This project implements a real-time IoT-based Air Quality Monitoring and Classification System using environmental sensors and a TinyML-deployed XGBoost model.

The system measures the following environmental parameters:

- Temperature (DHT11)
- Humidity (DHT11)
- PM2.5 (PMS7003)
- PM10 (PMS7003)

These parameters are used as input features for a multi-class XGBoost model that categorizes air quality into six AQI classes.

The trained model is converted into embedded C format and deployed directly on an ESP32 microcontroller, enabling fully offline, real-time air quality classification using TinyML.

---

## Machine Learning Model

### Algorithm Used
XGBoost (Extreme Gradient Boosting)

XGBoost was selected due to:

- High classification accuracy
- Strong handling of non-linear relationships
- Robustness to noisy sensor data
- Efficient conversion for embedded deployment
- Superior performance compared to Random Forest during experimentation

---

## Model Details

| Parameter | Value |
|-----------|--------|
| Model Type | Multi-Class Classification |
| Number of Classes | 6 |
| Number of Features | 4 |
| Training Accuracy | 97.6% |
| Test Accuracy | 97.4% |
| Deployment | TinyML on ESP32 |

---

## Input Features

1. Temperature (°C)
2. Humidity (%)
3. PM2.5 (µg/m³)
4. PM10 (µg/m³)

Feature vector format:

```
[Temperature, Humidity, PM2.5, PM10]
```

---

## Output Classes

The model predicts one of the following air quality categories:

1. Good
2. Satisfactory
3. Moderate
4. Poor
5. Very Poor
6. Severe

---

## Hardware Components

- ESP32 Microcontroller
- PMS7003 Particulate Matter Sensor (PM2.5 and PM10)
- DHT11 Temperature and Humidity Sensor
- USB Power Supply

---

## TinyML Deployment Pipeline

1. Model trained in Python using XGBoost
2. Model exported in JSON format
3. Converted into embedded C array (`xgb_model.c`)
4. Integrated into ESP32 firmware using Arduino IDE
5. Real-time inference executed directly on the device

### On-Device Inference Flow

```
Sensor Reading
      ↓
Feature Vector Creation
      ↓
Embedded XGBoost Model
      ↓
AQI Category Output
```

All predictions are performed on the ESP32 without any cloud communication.

---

## Performance Evaluation

| Metric | Score |
|--------|--------|
| Training Accuracy | 97.6% |
| Test Accuracy | 97.4% |
| Model Type | XGBoost |
| Classes | 6 |
| Deployment Type | Edge TinyML |

The close alignment between training and test accuracy indicates strong generalization performance with minimal overfitting.

---

## Key Features

- Real-time air quality classification
- Fully offline TinyML inference
- High accuracy (97%+)
- Low-cost sensor-based architecture
- Edge AI deployment
- Scalable for smart city applications

---

## Advantages of Edge AI (TinyML)

- No internet dependency
- Low latency prediction
- Improved data privacy
- Reduced cloud infrastructure cost
- Energy-efficient deployment

---

## Applications

- Smart City Air Monitoring
- Industrial Pollution Tracking
- Indoor Air Quality Systems
- Portable AQI Monitoring Devices
- Environmental Research and Analysis

---

## Future Enhancements

- Integration of additional gas sensors (CO, NO₂, SO₂)
- Real-time cloud dashboard integration
- Mobile application development
- Explainable AI integration using SHAP
- Over-the-Air (OTA) model updates
- Hybrid Edge and Cloud deployment

---
