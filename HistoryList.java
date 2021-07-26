class NumberList{
static int size; 
ArrayList a=new ArrayList();
public NumberList(){
size=0;
}
public static void add(int value){
a.add(value);
}
public static void remove(int index){
a.remove(index);
}
public static int size(){
return size;
}
public static String toString(){
Arrays.toString(a);
}
public boolean isEmpty(){
if(size==0)
return false;
}
}

class HistoryList extends NumberList{

pulic static void main(String[] args)
{
  HistoryList list=new HistoryList();
  list.add(18);
  list.add(27);
  list.add(0,45);
  list.remove(1);
}
  public int historySize(){
   System.out.println(super().size()); 
  }
public String getHistory(int index){
for (int i = 0; i < list.historySize(); i++) {

}
System.out.println(list.getHistory(i));
}
}
