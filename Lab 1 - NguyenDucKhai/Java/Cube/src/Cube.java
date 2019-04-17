
public class Cube {
	
	private double edge;
	
	public 
		Cube(double e)
		{
			edge = e;
		}
		double getEdge()
		{
			return edge;
		}
		double getVolume()
		{
			return edge * edge * edge;
		}
		
	public static void main (String args[])
	{
		Cube C1 = new Cube(10);
		System.out.println("Edge: " +C1.getEdge());
		System.out.println("Volume: "+C1.getVolume());
	}
}
