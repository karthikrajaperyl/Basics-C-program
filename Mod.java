class ZigzagTree{
class Node{
int data;
Node left,right;
Node(int data){
this.data=data;
right=left=null;
}
}
Node root;
ZigzagTree(){
root=null;
}
public static void insert(int data){
root=insertutill(root,data);
}
public void zigzagtraverse()
{
Stack<Node> s1=new Stack<>();
Stack<Node> s2=new Stack<>();
s1.add(root);
int temp;
int leftright=true;
while(!s1.empty())
{
temp=s1.pop();
System.out.println(temp.data);
if(leftright)
{
if(temp.right!=null)
s2.push(temp.left);
else
s2.push(temp.right);
}
else
{
if(temp.right!=null)
s2.push(temp.right);
else
s2.push(temp.left);
}
Stack<Node> temp=s1;
s1=s2;
s2=temp;
}
}
}
public static Node insertutill(Node root,int data){
if(root==null){
root=new Node(root);
return root;
}

if(data<root.data){
root.left=insert(root.left,data);
else
root.right=insert(root.right,data);
}
public static void main(String[] args){
ZigzagTree tee=new ZigzagTree();
tree.insert(50);
tree.insert(40);
tree.insert(30);
tree.zigzagtraverse();
}
}