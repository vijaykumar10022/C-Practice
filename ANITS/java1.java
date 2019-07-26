 class A {
	 int a=10,b=20;
	void add(int a,int b) {
		this.a=a;
		this.b=b;
		System.out.println(a+b);
	}
	void add(int a,double b) {
		System.out.println(a+b);
	}
	void add() {
		int a=10,b=20;
		System.out.println(a+b);
	}
	public static void main(String[] args) 
	{
	 
		A d=new A();
		A e=new A();
		d.add(20,20);
		e.add();
		//System.out.println("HelloWorld");
	}
}
