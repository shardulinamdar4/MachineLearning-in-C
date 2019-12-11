int main(){
int cars,owner,mileage;
/* Initialize nodes */
struct node *root;
struct node *car;
struct node *swift;
struct node *indica;
struct node *sfirst;
struct node *sgreater;
struct node *ifirst;
struct node *igreater;
struct node *sfgtwenty;
struct node *sfltwenty;
struct node *sggtwenty;
struct node *sgltwenty;
struct node *ifgtwenty;
struct node *ifltwenty;
struct node *iggtwenty;
struct node *igltwenty;
/* Allocate memory */
car = malloc(sizeof(struct node));
swift = malloc(sizeof(struct node));
indica = malloc(sizeof(struct node));
sfirst= malloc(sizeof(struct node));
sgreater= malloc(sizeof(struct node));
ifirst=malloc(sizeof(struct node));
igreater=malloc(sizeof(struct node));
sfgtwenty=malloc(sizeof(struct node));
sfltwenty=malloc(sizeof(struct node));
sggtwenty=malloc(sizeof(struct node));
sgltwenty=malloc(sizeof(struct node));
ifgtwenty=malloc(sizeof(struct node));
ifltwenty=malloc(sizeof(struct node));
iggtwenty=malloc(sizeof(struct node));
igltwenty=malloc(sizeof(struct node));
/* Assign data values */
car->data=*"Car";
swift->data=*"Swift";
indica->data=*"Indica";
sfirst->data=*"First owner of swift";
sgreater->data=*"Greter than first owner of swift";
ifirst->data=*"first owner of indica";
igreater->data=*"Greter than first owner of indica";
sfgtwenty->data=*"Zwift first owner with milege greater than 20";
sfltwenty->data=*"Swift first owner with milege less than 20";
sggtwenty->data=*"Swift greater than first owner with milege greater than 20";
sgltwenty->data=*"Swift greater than first owner with milege less than 20";
ifgtwenty->data=*"Indica first owner with milege greater than 20";
ifltwenty->data=*"Indica first owner with milege less than 20";
iggtwenty->data=*"Indica greater than first owner with milege greater than 20";
igltwenty->data=*"Indica greater than first owner with milege less than 20";
/* Connect nodes */
car->left = swift;
car->right = indica;
swift->left = sfirst;
swift->right =sgreater;
indica->left =ifirst;
indica->right = igreater;
sfirst->left =sfgtwenty;
sfirst->right =sfltwenty;
sgreater->left =sggtwenty;
sgreater->right =sgltwenty;
ifirst->left =ifgtwenty;
ifirst->right =ifltwenty;
igreater->left =iggtwenty;
igreater->right =igltwenty;
/* Save address of first node in root */
root = car;}
