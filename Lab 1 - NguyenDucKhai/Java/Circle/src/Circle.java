
public class Circle {
	private double radius;
	
	public
	Circle(double r)
	{
		radius = r;
	}
	double getRadius()
	{
		return radius;
	}
	double getArea()
	{
		return radius * radius * 3.1419;
	}
	double getPerimeter()
	{
		return 2 * radius * 3.1419;
	}
	
public static void main(String args[])
{
	Circle C1 = new Circle(10);
	System.out.println("Radius :" +C1.getRadius());
	System.out.println("Area: " +C1.getArea());
	System.out.println("Perimeter: " +C1.getPerimeter());
	
	
	
}

}
