int GetPixel(SDL_Surface* pSurface, int x, int y)
{
	SDL_Color color;
	Uint32 col=0;
	//determine position
	char* pPosition=( char* ) pSurface->pixels;
	pPosition +=( pSurface->pitch * y);
	pPosition+=( pSurface->format->BytesPerPixel * x);
	memcpy(&col, pPosition, pSurface->format->BytesPerPixel);
	SDL_GetRGB(col, pSurface->format,&color.r,&color.g,&color.b);
	if((color.r==255)&&(color.g==255)&&(color.b==255))
		return 1;
	else return 0;
}