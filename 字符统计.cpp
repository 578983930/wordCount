int jzs_count(FILE *inFile) //�ַ�ͳ��
{
	char a;
	int sum;
	whlie((a=fgetc(inFile))!=EOF&&a>=0&&a<=255) //�ж��Ƿ��ǷǺ����ַ�
	{
	  sum++;
    }
    return sum; 
} 
