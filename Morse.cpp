������ �� Arduino.h ��
������ �� Morse.h ��

Ī��˹::Ī��˹��int pin��
{
	pinMode�����ţ�OUTPUT��;
	_pin =��;
	_dottime = 250 ;
}

void  Morse :: dot����
{
	digitalWrite��_pin��HIGH��;
	�ӳ٣�_dottime��;
	digitalWrite��_pin��LOW��;
	�ӳ٣�_dottime��;
}

void  Morse :: dash����
{
	digitalWrite��_pin��HIGH��;
	�ӳ٣�_dottime * 4��;
	digitalWrite��_pin��LOW��;
	�ӳ٣�_dottime��;
}

void  Morse :: c_space����
{
	digitalWrite��_pin��LOW��;
	�ӳ٣�_dottime * 3��;
}

void  Morse :: w_space����
{
	digitalWrite��_pin��LOW��;
	�ӳ٣�_dottime * 7��;
}
