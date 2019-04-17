
public class Student {
	
	private String name;
	private long id;
	private double math, physic, english;
	
	public Student(String name, long id)
	{
		this.name = name;
		this.id = id;
	}
	
	public void setMath(double value)
	{
		math = value;
	}
	
	public void setPhysic(double value)
	{
		physic = value;
	}
	
	public void setEnglish(double value)
	{
		english = value;
	}
	public double getAverage()
	{
		return (math+physic+english) / 3 ;
	}
	public void display()
	{
		System.out.println("Name: " +name);
		System.out.println("ID: " +id);
		System.out.println("Math: " +math);
		System.out.println("Physic: " +physic);
		System.out.println("English: " +english);
		System.out.println("Average: " +getAverage());	
	}
	
	public static void main(String args[])
	{
		Student std1 = new Student("Khai", 1605);
		
		std1.setMath(10);
		std1.setEnglish(9);
		std1.setPhysic(8);
		
		std1.display();
		
	}
	

}
