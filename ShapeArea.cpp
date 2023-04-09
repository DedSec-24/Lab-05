#include <iostream>
#include "ShapeArea.h"

float areaCircle( float r)
{
	return (22/7.0*r*r);
}
float areaRectangale( float l, float w)
{
	return (l * w);
}
float areaSqure( float l)
{
	return ( l * l);
}
float perimeter( float l, float w)
{
	return l*2 + w*2;
}
float totalcost(float cost , float perimeter)
{
	return cost * perimeter ;
}