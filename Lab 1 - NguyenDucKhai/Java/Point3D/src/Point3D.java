
public class Point3D {

	private double x, y, z;
	
	public Point3D(double a, double b, double c)
	{
		x = a;
		y = b;
		z = c;
	}
	
	public double distanceFrom(Point3D P)
	{
		return Math.sqrt( Math.pow(x-P.x,2) + Math.pow(y-P.y,2) + Math.pow(z-P.z,2));
	}
	
	public double distanceFrom(double xVal, double yVal, double zVal)
	{
		return Math.sqrt( Math.pow(x-xVal,2) + Math.pow(y-yVal,2) + Math.pow(z-zVal,2));
	}
	
	public double distanceFromCenter()
	{
		return distanceFrom(0,0,0);
	}
	
	public void display()
	{
		System.out.println(+x+ ", " +y+ ", " +z);
	}
	
	public static void main(String args[])
	{
		Point3D P1 = new Point3D(2,3,4);
		Point3D P2 = new Point3D(4,5,6);
		
		System.out.println("Point 1: "); P1.display();
		System.out.println("Point 2: "); P2.display();
		
		System.out.println("Distance from P1 to center: " +P1.distanceFromCenter());
		System.out.println("Distance from P2 to center: " +P2.distanceFromCenter());
		
		System.out.println("Distance from P1 to P2: " +P1.distanceFrom(P2));
	}
}
