void getDayOfWeek (timestruct *time) 
{ 
	const int monthFix[13] = { 0, 5, 8, 8, 11, 6, 9, 11, 7, 10, 5, 8, 10 };
	const int leapDayFix = (time->month <= 2 && time->year % 4 == 0) ? -1 : 0; 
	time->dow = (short)((time->year*5 + time->day + leapDayFix + monthFix[time->month]) % 7); 
}