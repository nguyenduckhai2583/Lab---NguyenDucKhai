
public class Rectangle {
	private double width, length;
	public 
	void setRectangle(double l, double w)
	{
		width = w;
		length = l;
	}
	double getWidth()
	{
		return width;
	}
	double getLength()
	{
		return length;
	}
	double getArea()
	{
		return width * length;
	}
	
	public static void main(String args[])
	{
		Rectangle R1 = new Rectangle();
		R1.setRectangle(10, 5);
		System.out.println("Width: " +R1.getWidth());
		System.out.println("Length: " +R1.getLength());
		System.out.println("Area: " +R1.getArea());
		
		
	}
}
