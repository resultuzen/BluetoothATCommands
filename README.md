# Bluetooth AT Commands
Software was made to use the AT commands for bluetooth modules.

First we run the __'AT'__ command. If the __'OK'__ returns, we can now run other commands.


## Bluetooth Baudrate Settings

- __AT+BAUD1__ 	// 1200 Baud
- __AT+BAUD2__ 	// 2400 Baud
- __AT+BAUD3__ 	// 4800 Baud
- __AT+BAUD4__ 	// 9600 Baud (__Suggested__)
- __AT+BAUD5__ 	// 19200 Baud
- __AT+BAUD6__ 	// 38400 Baud
- __AT+BAUD7__ 	// 57600 Baud
- __AT+BAUD8__ 	// 115200 Baud


## Bluetooth Name Settings

- __AT+NAME__ 

```
 
- AT+NAMEresul,	AT+NAMEtuzen, AT+NAMEResul01

```


## Bluetooth Password Settings

- __AT+PIN__ 

```
AT+PIN1234 (True)
AT+PIN0123 (True)
AT+PINR2D2 (False)
AT+PINXYZW (False)
```
 
