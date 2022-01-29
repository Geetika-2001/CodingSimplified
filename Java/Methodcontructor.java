class Student
{
    private String name,universityname,branch;
    private int id;

    public void getname()
    {
        System.out.println("Name : "+name);
        System.out.println("Registration ID : "+id);
        System.out.println("University Name : "+universityname);
        System.out.println("Branch : "+branch);
    }

    public void set(String name)
    {
        this.name = name;
    }

    public void set(String name, int id)
    {
        set(name);
        this.id = id;
    }

    public void set(String name,int id,String universityname)
    {
        set(name,id);
        this.universityname = universityname;
    }

    public void set(String name,int id,String universityname,String branch)
    {
        set(name,id,universityname);
        this.branch = branch;
    }
}
class Main
{
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();
        Student s4 = new Student();

        s1.set("Geetika");
        s1.getname();
        System.out.println("\n\n\n");
        s2.set("Shravan",2091);
        s2.getname();
        System.out.println("\n\n\n");
        s3.set("Raman",1034,"MUJ");
        s3.getname();
        System.out.println("\n\n\n");
        s4.set("Raghav",3893,"IIT","CSE");
        s4.getname();
    }
}