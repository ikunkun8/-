££°üÀ¨ ¡° Arduino.h ¡±
££°üÀ¨ ¡° Morse.h ¡±

Äª¶ûË¹::Äª¶ûË¹£¨int pin£©
{
	pinMode£¨Òý½Å£¬OUTPUT£©;
	_pin =Ïú;
	_dottime = 250 ;
}

void  Morse :: dot£¨£©
{
	digitalWrite£¨_pin£¬HIGH£©;
	ÑÓ³Ù£¨_dottime£©;
	digitalWrite£¨_pin£¬LOW£©;
	ÑÓ³Ù£¨_dottime£©;
}

void  Morse :: dash£¨£©
{
	digitalWrite£¨_pin£¬HIGH£©;
	ÑÓ³Ù£¨_dottime * 4£©;
	digitalWrite£¨_pin£¬LOW£©;
	ÑÓ³Ù£¨_dottime£©;
}

void  Morse :: c_space£¨£©
{
	digitalWrite£¨_pin£¬LOW£©;
	ÑÓ³Ù£¨_dottime * 3£©;
}

void  Morse :: w_space£¨£©
{
	digitalWrite£¨_pin£¬LOW£©;
	ÑÓ³Ù£¨_dottime * 7£©;
}
