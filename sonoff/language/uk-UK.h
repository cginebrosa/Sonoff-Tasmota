/*
  uk-UK.h - localization for Ukrainian - Ukrain for Sonoff-Tasmota

  Copyright (C) 2018  Theo Arends / vadym-adik

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_UK_UK_H_
#define _LANGUAGE_UK_UK_H_

//STB mod
#define D_JSON_MOISTURE "Moisture"
#define D_JSON_DISTANCE "Distance"
#define D_CONFIGURE_PCF8574 "Configure PCF8574"
#define D_CMND_COUNTERDEVIDER "CounterDevider"
#define D_CMND_MQTTENABLE "MqttEnable"
#define D_SENSOR_DEEPSLEEP "DeepSleep Switch"
#define D_CMND_OPEN "shutteropen"
#define D_CMND_CLOSE "shutterclose"
#define D_CMND_STOP "shutterstop"
#define D_CMND_POSITION "shutterposition"
#define D_CMND_OPENTIME "shutteropenduration"
#define D_CMND_CLOSETIME "shuttercloseduration"
#define D_CMND_SHUTTERRELAY "shutterrelay"
#define D_OPEN "Open"
#define D_CLOSE "Close"
#define D_SHUTTER "SHUTTER"
#define D_CMND_INTERLOCKMASK "INTERLOCKMASK"
#define D_CMND_SET50PERCENT "shutter50percent"
#define D_CMND_SHUTTERSETCLOSE "shuttersetclose"
#define D_CMND_SHUTTERINVERT "shutterinvert"
#define D_CMND_INTERLOCKBUCKETSIZE "bucketsize"
//end

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
 * Updated until v5.14.0a
\*********************************************************************/

//#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)

#define LANGUAGE_LCID 1058
// HTML (ISO 639-1) Language Code
#define D_HTML_LANGUAGE "uk"

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "-"
#define D_MONTH_DAY_SEPARATOR "-"
#define D_DATE_TIME_SEPARATOR "T"
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "НедПонВівСерЧетПятСуб"
#define D_MONTH3LIST "СічЛютБерКвіТраЧерЛипВерЖовЛисГру"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR ","

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "Якість повітря"
#define D_AP "AP"                    // Access Point
#define D_AS "як"
#define D_AUTO "АВТО"
#define D_BLINK "Блимати"
#define D_BLINKOFF "Не блимати"
#define D_BOOT_COUNT "Кіл-сть завант."
#define D_BRIGHTLIGHT "Яскравість"
#define D_BUTTON "Кнопка"
#define D_BY "by"                    // Written by me
#define D_BYTES "Байт"
#define D_CELSIUS "Цельсія"
#define D_CO2 "Вуглек. газ"
#define D_CODE "код"                // Button code
#define D_COLDLIGHT "Холодний"
#define D_COMMAND "Команда"
#define D_CONNECTED "Під'єднано"
#define D_COUNT "Підрахунок"
#define D_COUNTER "Лічильник"
#define D_CURRENT "Струм"          // As in Voltage and Current
#define D_DATA "Дані"
#define D_DARKLIGHT "Темний"
#define D_DEBUG "Налагодження"
#define D_DISABLED "Заблоковано"
#define D_DISTANCE "Дистанція"
#define D_DNS_SERVER "DNS Сервер"
#define D_DONE "Виконано"
#define D_DST_TIME "Літній час"
#define D_ECO2 "eCO2"
#define D_EMULATION "Емуляція"
#define D_ENABLED "Активно"
#define D_ERASE "Стирати"
#define D_ERROR "Помилка"
#define D_FAHRENHEIT "Фаренгейт"
#define D_FAILED "Невдало"
#define D_FALLBACK "Зворотній зв'язок"
#define D_FALLBACK_TOPIC "Топік зворотнього зв'язку"
#define D_FALSE "Помилково"
#define D_FILE "Файл"
#define D_FREE_MEMORY "Вільна память"
#define D_FREQUENCY "Частота"
#define D_GAS "Газ"
#define D_GATEWAY "Шлюз"
#define D_GROUP "Група"
#define D_HOST "Хост"
#define D_HOSTNAME "Ім'я Хосту"
#define D_HUMIDITY "Вологість"
#define D_ILLUMINANCE "Освітленність"
#define D_IMMEDIATE "негайно"      // Button immediate
#define D_INDEX "Індекс"
#define D_INFO "Інфо"
#define D_INFRARED "Інфрачервоний"
#define D_INITIALIZED "Ініціалізовано"
#define D_IP_ADDRESS "IP Адрес"
#define D_LIGHT "Світло"
#define D_LWT "LWT"
#define D_MODULE "Модуль"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "багаторазове натискання"
#define D_NOISE "Шум"
#define D_NONE "Ні"
#define D_OFF "Вимк."
#define D_OFFLINE "Офф-лайн"
#define D_OK "Ок"
#define D_ON "Увімк."
#define D_ONLINE "Он-лайн"
#define D_PASSWORD "Гасло"
#define D_PORT "Порт"
#define D_POWER_FACTOR "Коефіцієнт потужності"
#define D_POWERUSAGE "Потужність"
#define D_POWERUSAGE_ACTIVE "Активна потужність"
#define D_POWERUSAGE_APPARENT "Дійсна потужність"
#define D_POWERUSAGE_REACTIVE "Реактивна потужність"
#define D_PRESSURE "Тиск"
#define D_PRESSUREATSEALEVEL "Тиск на рівні моря"
#define D_PROGRAM_FLASH_SIZE "Розмір Flash для програм"
#define D_PROGRAM_SIZE "Розмір програм "
#define D_PROJECT "Проект"
#define D_RECEIVED "Отримано"
#define D_RESTART "Перезавантаження"
#define D_RESTARTING "Перезавантаження"
#define D_RESTART_REASON "Причина перезавантаження"
#define D_RESTORE "відновлення"
#define D_RETAINED "нерозподілений"
#define D_RULE "Правило"
#define D_SAVE "Зберегти"
#define D_SENSOR "Датчик"
#define D_SSID "SSID"
#define D_START "Старт"
#define D_STD_TIME "STD"
#define D_STOP "Стоп"
#define D_SUBNET_MASK "Маска Підмережі"
#define D_SUBSCRIBE_TO "Підписатись на"
#define D_SUCCESSFUL "Успішно"
#define D_SUNRISE "Схід сонця"
#define D_SUNSET "Захід сонця"
#define D_TEMPERATURE "Температура"
#define D_TO "до"
#define D_TOGGLE "Перекл."
#define D_TOPIC "Топік"
#define D_TRANSMIT "Передати"
#define D_TRUE "Істина"
#define D_TVOC "TVOC"
#define D_UPGRADE "оновлення"
#define D_UPLOAD "Завантажити"
#define D_UPTIME "Час роботи"
#define D_USER "Користувач"
#define D_UTC_TIME "UTC"
#define D_UV_INDEX "УФ індекс"
#define D_UV_LEVEL "УФ рівень"
#define D_VERSION "Версія"
#define D_VOLTAGE "Напруга"
#define D_WARMLIGHT "Тепло"
#define D_WEB_SERVER "Web сервер"

// sonoff.ino
#define D_WARNING_MINIMAL_VERSION "ПОПЕРЕДЖЕННЯ! Ця версія не підтримує персистентні налаштування"
#define D_LEVEL_10 "рівень 1-0"
#define D_LEVEL_01 "рівень 0-1"
#define D_SERIAL_LOGGING_DISABLED "Serial logging вимкнений"
#define D_SYSLOG_LOGGING_REENABLED "Syslog logging увімкнений"

#define D_SET_BAUDRATE_TO "Встановити швидкість передачі (Baudrate)"
#define D_RECEIVED_TOPIC "Отриманий Топік"
#define D_DATA_SIZE "Розмір даних"
#define D_ANALOG_INPUT "Аналоговий вхід"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Блокуючий цикл"
#define D_WPS_FAILED_WITH_STATUS "WPS конфігурація з статусом НЕВДАЛА"
#define D_ACTIVE_FOR_3_MINUTES "активний протягом 3 хвилин"
#define D_FAILED_TO_START "не вдалось запустити"
#define D_PATCH_ISSUE_2186 "Проблема з виправленням 2186"
#define D_CONNECTING_TO_AP "Підключення до AP"
#define D_IN_MODE "в режимі"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "Помилка підключення, IP-адрес не отриманий"
#define D_CONNECT_FAILED_AP_NOT_REACHED "Помилка з'єднання, AP не запущений"
#define D_CONNECT_FAILED_WRONG_PASSWORD "Помилка з'єднання, невірне гасло до AP"
#define D_CONNECT_FAILED_AP_TIMEOUT "Помилка з'єднання з AP по тайм-ауту"
#define D_ATTEMPTING_CONNECTION "Спроба підключення..."
#define D_CHECKING_CONNECTION "Перевірка з'єднання..."
#define D_QUERY_DONE "Запит виконаний. Виявлено служби MQTT"
#define D_MQTT_SERVICE_FOUND "MQTT сервіс знайдено"
#define D_FOUND_AT "знайдено в"
#define D_SYSLOG_HOST_NOT_FOUND "System лог хост не знайдено"

// settings.ino
#define D_SAVED_TO_FLASH_AT "Збережено в флэш-пам'ять"
#define D_LOADED_FROM_FLASH_AT "Завантажено з флэш-пам'яті"
#define D_USE_DEFAULTS "Використовувати значення за замовчуванням"
#define D_ERASED_SECTOR "Стерти сектор"

// xdrv_02_webserver.ino
#define D_NOSCRIPT "To use Tasmota, please enable JavaScript"
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "Прошивка MINIMAL - будь-ласка оновіть"
#define D_WEBSERVER_ACTIVE_ON "Веб-сервер активний"
#define D_WITH_IP_ADDRESS "з IP-адресом"
#define D_WEBSERVER_STOPPED "Веб-сервер зупинений"
#define D_FILE_NOT_FOUND "Файл не знайдений"
#define D_REDIRECTED "Перенаправлено на адаптивний портал"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "Wifi менеджер встановлює Точку Доступу і зберігає параметри"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Wifi менеджер встановив Точку Доступу"
#define D_TRYING_TO_CONNECT "Спроба підключення пристрою до мережі"

#define D_RESTART_IN "Перезавантаження"
#define D_SECONDS "секунд"
#define D_DEVICE_WILL_RESTART "Пристрій буде перезавантажено через декілька секунд"
#define D_BUTTON_TOGGLE "Переключити"
#define D_CONFIGURATION "Конфігурація"
#define D_INFORMATION "Інформація"
#define D_FIRMWARE_UPGRADE "Оновлення прошивки"
#define D_CONSOLE "Консоль"
#define D_CONFIRM_RESTART "Підтвердити перезавантаження"

#define D_CONFIGURE_MODULE "Конфігурація модуля"
#define D_CONFIGURE_WIFI "Конфігурація WiFi"
#define D_CONFIGURE_MQTT "Конфігурація MQTT"
#define D_CONFIGURE_DOMOTICZ "Конфігурація Domoticz"
#define D_CONFIGURE_LOGGING "Конфігурація Логів"
#define D_CONFIGURE_OTHER "Конфігурація інше"
#define D_CONFIRM_RESET_CONFIGURATION "Підтвердити скидання конфігурації"
#define D_RESET_CONFIGURATION "Скидання конфігурації"
#define D_BACKUP_CONFIGURATION "Резервне копіювання конфігурації"
#define D_RESTORE_CONFIGURATION "Відновлення конфігурації"
#define D_MAIN_MENU "Головне меню"

#define D_MODULE_PARAMETERS "Параметри модулю"
#define D_MODULE_TYPE "Тип модулю"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "Serial вхід"
#define D_SERIAL_OUT "Serial вихід"

#define D_WIFI_PARAMETERS "Параметри Wifi"
#define D_SCAN_FOR_WIFI_NETWORKS "Сканування беспроводових мереж Wifi"
#define D_SCAN_DONE "Сканування завершене"
#define D_NO_NETWORKS_FOUND "Не знайдено мереж"
#define D_REFRESH_TO_SCAN_AGAIN "Оновити для повторного сканування"
#define D_DUPLICATE_ACCESSPOINT "Дублювати Точку Доступу (AP)"
#define D_SKIPPING_LOW_QUALITY "Пропущено через низьку якість"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "AP1 SSID"
#define D_AP1_PASSWORD "AP1 Гасло"
#define D_AP2_SSID "AP2 SSID"
#define D_AP2_PASSWORD "AP2 Гасло"

#define D_MQTT_PARAMETERS "Параметри MQTT"
#define D_CLIENT "Клієнт"
#define D_FULL_TOPIC "Повний Топік"

#define D_LOGGING_PARAMETERS "Параметри логів"
#define D_SERIAL_LOG_LEVEL "Serial лог рівень"
#define D_WEB_LOG_LEVEL "Web лог рівень"
#define D_SYS_LOG_LEVEL "System лог рівень"
#define D_MORE_DEBUG "Додаткова інформація для налагодження"
#define D_SYSLOG_HOST "System лог хост"
#define D_SYSLOG_PORT "System лог порт"
#define D_TELEMETRY_PERIOD "Період телеметрії"

#define D_OTHER_PARAMETERS "Параметри Інше"
#define D_WEB_ADMIN_PASSWORD "Гасло Web адміністратора"
#define D_MQTT_ENABLE "MQTT активний"
#define D_FRIENDLY_NAME "Дружнє Ім'я"
#define D_BELKIN_WEMO "Belkin WeMo"
#define D_HUE_BRIDGE "Hue Bridge"
#define D_SINGLE_DEVICE "одиночне"
#define D_MULTI_DEVICE "мульти"

#define D_SAVE_CONFIGURATION "Зберегти конфігурацію"
#define D_CONFIGURATION_SAVED "Конфігурація збережена "
#define D_CONFIGURATION_RESET "Конфігурація скинута"

#define D_PROGRAM_VERSION "Версія програми"
#define D_BUILD_DATE_AND_TIME "Дата & Час збірки"
#define D_CORE_AND_SDK_VERSION "Версія Core/SDK"
#define D_FLASH_WRITE_COUNT "Кіл-ть записів Flash"
#define D_MAC_ADDRESS "MAC Адрес"
#define D_MQTT_HOST "MQTT Хост"
#define D_MQTT_PORT "MQTT Порт"
#define D_MQTT_CLIENT "MQTT Клієнт ID"
#define D_MQTT_USER "MQTT Користувач"
#define D_MQTT_TOPIC "MQTT Топік"
#define D_MQTT_GROUP_TOPIC "MQTT Топік групи"
#define D_MQTT_FULL_TOPIC "MQTT Топік повний"
#define D_MDNS_DISCOVERY "mDNS Виявлення"
#define D_MDNS_ADVERTISE "mDNS Транcляція"
#define D_ESP_CHIP_ID "ID чипу ESP"
#define D_FLASH_CHIP_ID "ID чипу Flash пам'яті"
#define D_FLASH_CHIP_SIZE "Розмір Flash пам'яті"
#define D_FREE_PROGRAM_SPACE "Вільний простір програм"

#define D_UPGRADE_BY_WEBSERVER "Оновлення через Веб-сервер"
#define D_OTA_URL "OTA Url"
#define D_START_UPGRADE "Почати оновлення"
#define D_UPGRADE_BY_FILE_UPLOAD "Оновлення шляхом завантаження файлів"
#define D_UPLOAD_STARTED "Завантаження почалось"
#define D_UPGRADE_STARTED "Оновлення почалось"
#define D_UPLOAD_DONE "Завантаження завершено"
#define D_UPLOAD_ERR_1 "Файл не вибраний"
#define D_UPLOAD_ERR_2 "Недостатньо місця"
#define D_UPLOAD_ERR_3 "Magic байт не 0xE9"
#define D_UPLOAD_ERR_4 "Размір прошивки більше, чим реальний размір флеш пам'яті"
#define D_UPLOAD_ERR_5 "Помилка завантаження буферу"
#define D_UPLOAD_ERR_6 "Помилка завантаження. Увімкнено лог рівень 3"
#define D_UPLOAD_ERR_7 "Завантаження перервано"
#define D_UPLOAD_ERR_8 "Файл невірний"
#define D_UPLOAD_ERR_9 "Занадто великий файл"
#define D_UPLOAD_ERR_10 "Failed to init RF chip"
#define D_UPLOAD_ERR_11 "Failed to erase RF chip"
#define D_UPLOAD_ERR_12 "Failed to write to RF chip"
#define D_UPLOAD_ERR_13 "Failed to decode RF firmware"
#define D_UPLOAD_ERROR_CODE "Код помилки завантаження"

#define D_ENTER_COMMAND "Уведіть команду"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "Увімкніть Веб лог рівня 2 якщо очікуєте відповідь"
#define D_NEED_USER_AND_PASSWORD "Очікується user=<username>&password=<password>"

// xdrv_01_mqtt.ino
#define D_FINGERPRINT "Перевірка TLS відбитка..."
#define D_TLS_CONNECT_FAILED_TO "Збій підключення TLS до"
#define D_RETRY_IN "Повторити"
#define D_VERIFIED "Перевірено відбиток"
#define D_INSECURE "Небезпечне з'єднання, недійсний відбиток "
#define D_CONNECT_FAILED_TO "Помилка підключення до"

// xplg_wemohue.ino
#define D_MULTICAST_DISABLED "Multicast вимкнений"
#define D_MULTICAST_REJOINED "Multicast (пере)під'єднався"
#define D_MULTICAST_JOIN_FAILED "Multicast помилка з'єднання"
#define D_FAILED_TO_SEND_RESPONSE "Не вдалось відправити відповідь"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo основна подія"
#define D_WEMO_EVENT_SERVICE "WeMo служба подій"
#define D_WEMO_META_SERVICE "WeMo мета-сервіс"
#define D_WEMO_SETUP "WeMo налаштування"
#define D_RESPONSE_SENT "Відповідь відправлена"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Hue налаштування"
#define D_HUE_API_NOT_IMPLEMENTED "Hue API не реалізовано"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST args"
#define D_3_RESPONSE_PACKETS_SENT "3 пакету відповіді  отримано"

// xdrv_07_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Domoticz налаштування"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Ключ idx"
#define D_DOMOTICZ_SWITCH_IDX "Перемикач idx"
#define D_DOMOTICZ_SENSOR_IDX "Датчик idx"
  #define D_DOMOTICZ_TEMP "Температура"
  #define D_DOMOTICZ_TEMP_HUM "Темп,Волог"
  #define D_DOMOTICZ_TEMP_HUM_BARO "Темп,Волог,Тиск"
  #define D_DOMOTICZ_POWER_ENERGY "Потуж,Енергія"
  #define D_DOMOTICZ_ILLUMINANCE "Освітлення"
  #define D_DOMOTICZ_COUNT "Лічильник/PM1"
  #define D_DOMOTICZ_VOLTAGE "Напруга/PM2,5"
  #define D_DOMOTICZ_CURRENT "Струм/PM10"
  #define D_DOMOTICZ_AIRQUALITY "Якість повітря"
#define D_DOMOTICZ_UPDATE_TIMER "Оновлення таймерів"

// xdrv_09_timers.ino
#define D_CONFIGURE_TIMER "Конфігурація таймеру"
#define D_TIMER_PARAMETERS "Налаштування таймеру"
#define D_TIMER_ENABLE "Увімкнений таймеру"
#define D_TIMER_ARM "Увімкнений"
#define D_TIMER_TIME "Час"
#define D_TIMER_DAYS "Дні"
#define D_TIMER_REPEAT "Повтор"
#define D_TIMER_OUTPUT "Вихід"
#define D_TIMER_ACTION "Дія"

// xdrv_10_knx.ino
#define D_CONFIGURE_KNX "Конфігурація KNX"
#define D_KNX_PARAMETERS "Налаштування KNX"
#define D_KNX_GENERAL_CONFIG "Основні"
#define D_KNX_PHYSICAL_ADDRESS "Фізична адреса"
#define D_KNX_PHYSICAL_ADDRESS_NOTE "( Має бути унікальним у мережі KNX)"
#define D_KNX_ENABLE "Увімкнений KNX"
#define D_KNX_GROUP_ADDRESS_TO_WRITE "Дані для запису групових адрес"
#define D_ADD "Додати"
#define D_DELETE "Видалити"
#define D_REPLY "Повторити"
#define D_KNX_GROUP_ADDRESS_TO_READ "Дані для читання групових адрес"
#define D_LOG_KNX "KNX: "
#define D_RECEIVED_FROM "Отримати з"
#define D_KNX_COMMAND_WRITE "Записати"
#define D_KNX_COMMAND_READ "Читати"
#define D_KNX_COMMAND_OTHER "Інше"
#define D_SENT_TO "надіслати до"
#define D_KNX_WARNING "Адреса групи (0/0/0) зарезервована і не може бути використана."
#define D_KNX_ENHANCEMENT "Підвищення зв'язку"
#define D_KNX_TX_SLOT "KNX TX"
#define D_KNX_RX_SLOT "KNX RX"

// xdrv_03_energy.ino
#define D_ENERGY_TODAY "Енергія Сьогодні"
#define D_ENERGY_YESTERDAY "Енергія Вчора"
#define D_ENERGY_TOTAL "Енергія Всього"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "Датчик DS18x20 занятий"
#define D_SENSOR_CRC_ERROR "Датчик DS18x20 - помилка CRC"
#define D_SENSORS_FOUND "Датчик DS18x20 знайдено"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "Тайм-аут, в очікуванні"
#define D_START_SIGNAL_LOW "стартовий сигнал низький"
#define D_START_SIGNAL_HIGH "стартовий сигнал високий"
#define D_PULSE "імпульс"
#define D_CHECKSUM_FAILURE "Помилка контрольної суми"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "Датчик не отримав команду ACK"
#define D_SHT1X_FOUND "SHT1X знайдено"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "Через Частини"

// xsns_32_mpu6050.ino
#define D_AX_AXIS "Accel. X-Axis"
#define D_AY_AXIS "Accel. Y-Axis"
#define D_AZ_AXIS "Accel. Z-Axis"
#define D_GX_AXIS "Gyro X-Axis"
#define D_GY_AXIS "Gyro Y-Axis"
#define D_GZ_AXIS "Gyro Z-Axis"

// sonoff_template.h
#define D_SENSOR_NONE     "-відсутньо-"
#define D_SENSOR_DHT11    "DHT11"
#define D_SENSOR_AM2301   "AM2301"
#define D_SENSOR_SI7021   "SI7021"
#define D_SENSOR_DS18X20  "DS18x20"
#define D_SENSOR_I2C_SCL  "I2C SCL"
#define D_SENSOR_I2C_SDA  "I2C SDA"
#define D_SENSOR_WS2812   "WS2812"
#define D_SENSOR_IRSEND   "IRsend"
#define D_SENSOR_SWITCH   "Перемикач"   // Suffix "1"
#define D_SENSOR_BUTTON   "Кнопка"   // Suffix "1"
#define D_SENSOR_RELAY    "Реле"    // Suffix "1i"
#define D_SENSOR_LED      "Led"      // Suffix "1i"
#define D_SENSOR_PWM      "PWM"      // Suffix "1"
#define D_SENSOR_COUNTER  "Лічильник"  // Suffix "1"
#define D_SENSOR_IRRECV   "IRrecv"
#define D_SENSOR_MHZ_RX   "MHZ Rx"
#define D_SENSOR_MHZ_TX   "MHZ Tx"
#define D_SENSOR_PZEM_RX  "PZEM Rx"
#define D_SENSOR_PZEM_TX  "PZEM Tx"
#define D_SENSOR_SAIR_RX  "SAir Rx"
#define D_SENSOR_SAIR_TX  "SAir Tx"
#define D_SENSOR_SPI_CS   "SPI CS"
#define D_SENSOR_SPI_DC   "SPI DC"
#define D_SENSOR_BACKLIGHT "BkLight"
#define D_SENSOR_PMS5003  "PMS5003"
#define D_SENSOR_SDS0X1   "SDS0X1"
#define D_SENSOR_SBR_RX   "SerBr Rx"
#define D_SENSOR_SBR_TX   "SerBr Tx"
#define D_SENSOR_SR04_TRIG "SR04 Tri"
#define D_SENSOR_SR04_ECHO "SR04 Ech"
#define D_SENSOR_SDM120_TX "SDM120 Tx"
#define D_SENSOR_SDM120_RX "SDM120 Rx"
#define D_SENSOR_SDM630_TX "SDM630 Tx"
#define D_SENSOR_SDM630_RX "SDM630 Rx"
#define D_SENSOR_TM1638_CLK "TM16 CLK"
#define D_SENSOR_TM1638_DIO "TM16 DIO"
#define D_SENSOR_TM1638_STB "TM16 STB"

// Units
#define D_UNIT_AMPERE "А"
#define D_UNIT_CENTIMETER "cм"
#define D_UNIT_HERTZ "Гц"
#define D_UNIT_HOUR "Г"
#define D_UNIT_KILOOHM "кОм"
#define D_UNIT_KILOWATTHOUR "кВт"
#define D_UNIT_LUX "лк"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "мкг/м3"
#define D_UNIT_MICROMETER "мкм"
#define D_UNIT_MICROSECOND "мкс"
#define D_UNIT_MILLIAMPERE "мА"
#define D_UNIT_MILLISECOND "мс"
#define D_UNIT_MINUTE "хв"
#define D_UNIT_PARTS_PER_BILLION "ppb"
#define D_UNIT_PARTS_PER_DECILITER "ppd"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PRESSURE "гПа"
#define D_UNIT_SECOND "сек"
#define D_UNIT_SECTORS "секторів"
#define D_UNIT_VA "ВA"
#define D_UNIT_VAR "VAr"
#define D_UNIT_VOLT "В"
#define D_UNIT_WATT "Вт"
#define D_UNIT_WATTHOUR "ВтГод"

// Log message prefix
#define D_LOG_APPLICATION "APP: "  // Application
#define D_LOG_BRIDGE "BRG: "       // Bridge
#define D_LOG_CONFIG "CFG: "       // Settings
#define D_LOG_COMMAND "CMD: "      // Command
#define D_LOG_DEBUG "DBG: "        // Debug
#define D_LOG_DHT "DHT: "          // DHT sensor
#define D_LOG_DOMOTICZ "DOM: "     // Domoticz
#define D_LOG_DSB "DSB: "          // DS18xB20 sensor
#define D_LOG_HTTP "HTP: "         // HTTP webserver
#define D_LOG_I2C "I2C: "          // I2C
#define D_LOG_IRR "IRR: "          // Infra Red Received
#define D_LOG_LOG "LOG: "          // Logging
#define D_LOG_MODULE "MOD: "       // Module
#define D_LOG_MDNS "DNS: "         // mDNS
#define D_LOG_MQTT "MQT: "         // MQTT
#define D_LOG_OTHER "OTH: "        // Other
#define D_LOG_RESULT "RSL: "       // Result
#define D_LOG_RFR "RFR: "          // RF Received
#define D_LOG_SERIAL "SER: "       // Serial
#define D_LOG_SHT1 "SHT: "         // SHT1x sensor
#define D_LOG_UPLOAD "UPL: "       // Upload
#define D_LOG_UPNP "UPP: "         // UPnP
#define D_LOG_WIFI "WIF: "         // Wifi

#endif // _LANGUAGE_UK_UK_H_
