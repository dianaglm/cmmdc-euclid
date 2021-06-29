int euclid(int x, int y)
{
	if(x<y)
	{
		int aux=x;
		x=y;
		y=aux;
	}
	int r=x%y;
	while(r)
	{
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}
