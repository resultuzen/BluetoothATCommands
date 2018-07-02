# Bluetooth AT Komutları - Türkçe Dili
Bu doküman, Bluetooth üzerinden AT komutlarını kullanmak için yapılmıştır.

İlk olarak **'AT'** komutunu seri haberleşme ekranı üzerinden yolluyoruz.  Eğer ekranda **'OK'** yazarsa, artık diğer komutları yollayabiliriz.

<br/>

## Bluetooth Haberleşme Hızı Ayarları

- __AT+BAUD1__ 	// 1200 Baud
- __AT+BAUD2__ 	// 2400 Baud
- __AT+BAUD3__ 	// 4800 Baud
- __AT+BAUD4__ 	// 9600 Baud (__Tavsiye Edilen__)
- __AT+BAUD5__ 	// 19200 Baud
- __AT+BAUD6__ 	// 38400 Baud
- __AT+BAUD7__ 	// 57600 Baud
- __AT+BAUD8__ 	// 115200 Baud

> **'AT+BAUD4'** komutunu yollarsak, ekranda **'OK9600'** ifadesi yazacaktır.

<br/>

## Bluetooth İsim Ayarları

- __AT+NAME__ 

```
 
AT+NAMEresul, AT+NAMEtuzen, AT+NAMEResul01

```
> **'AT+NAMEResul_HC06'** komutunu yollarsak, ekranda **'OKsetname'** ifadesi yazacaktır.

<br/>

## Bluetooth Şifre Ayarları

- __AT+PIN__ 

```
AT+PIN1234 (Doğru)
AT+PIN0123 (Doğru)
AT+PINR2D2 (Yanlış)
AT+PINXYZW (Yanlış)
```
> **'AT+PIN2017'** komutunu yollarsak, ekranda **'OKsetPIN'** ifadesi yazacaktır.
 
<br/>

## Bluetooth Versiyon Ayarları

- __AT+VERSION__ 

> **'AT+VERSION'** komutunu yollarsak, ekranda bluetooth versiyonu yazacaktır.

<br/>
<br/>
<br/>
<br/>

# Bluetooth AT Commands - English Language
Software was made to use the AT commands for bluetooth modules.

First we run the **'AT'** command. If the **'OK'** returns, we can now run other commands.

<br/>

## Bluetooth Baudrate Settings

- __AT+BAUD1__ 	// 1200 Baud
- __AT+BAUD2__ 	// 2400 Baud
- __AT+BAUD3__ 	// 4800 Baud
- __AT+BAUD4__ 	// 9600 Baud (__Suggested__)
- __AT+BAUD5__ 	// 19200 Baud
- __AT+BAUD6__ 	// 38400 Baud
- __AT+BAUD7__ 	// 57600 Baud
- __AT+BAUD8__ 	// 115200 Baud

> For example, if the **'AT+BAUD4'** command is executed, the **'OK9600'** command will return the value.

<br/>

## Bluetooth Name Settings

- __AT+NAME__ 

```
 
AT+NAMEresul, AT+NAMEtuzen, AT+NAMEResul01

```
> If the **'AT+NAME'** command is executed, the **'OKsetname'** command will return the value.

<br/>

## Bluetooth Password Settings

- __AT+PIN__ 

```
AT+PIN1234 (True)
AT+PIN0123 (True)
AT+PINR2D2 (False)
AT+PINXYZW (False)
```
> If the **'AT+PIN'** command is executed, the **'OKsetPIN'** command will return the value.
 
<br/>

## Bluetooth Version Settings

- __AT+VERSION__ 

> If the **'AT+VERSION'** command is run, it will send back the bluetooth version.
