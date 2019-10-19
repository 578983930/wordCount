int jzs_count(FILE *inFile) //×Ö·ûÍ³¼Æ
{
	char a;
	int sum;
	whlie((a=fgetc(inFile))!=EOF&&a>=0&&a<=255) //ÅÐ¶ÏÊÇ·ñÊÇ·Çºº×Ö×Ö·û
	{
	  sum++;
    }
    return sum; 
} 
