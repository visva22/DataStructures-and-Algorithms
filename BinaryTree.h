struct Node_b
{
  int data;
  Node_b* left;
  Node_b* right;
};

class BinaryTree
{
  public:
  BinaryTree();
  ~BinaryTree();
  void Insert(int data);
  void Get(int data);
  void Delete(int data);
  void Traverse(Node_b* root);
  Node_b* GetRoot();
  private:
  Node_b* CreateNode(int data);
  Node_b* RootNode;
};