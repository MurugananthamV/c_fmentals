C programming
#====================Data Structure
    #data structure is the formate for orgonizing and storing data.
    #each data structure or there for specific prpose to orgonize and store data in deffernt purpose.
#=====Array
    #array is the one of the data structure.
    #it have values but in array all are msut be same data type.
    #string vlue and integer value in one array is not allowed in array.
#==one dimensional
    #a single row have block of data is called one dimensional array.
    #---declaration----
        #data_type Name _of_array[number_of_elemnet];
    #compiler allcate the memory after declaation.size={number_of_elem}*sizeof(int)
    #length of the array can be specified by only integer constant expression.positive intger not negative.
    #----acessing array element----
        #array_name[index];index start with 0 and end with length-1.
        #intead of entering number of elemnets use macro to change value esily in future.
        # #define elem 30
        # int array[elem];
    #----initialization------
        # arr[5]={1,2,3,4,}
        #-------get from user-----using scanf and inside the loop.
        #array elemnts must me lesser the or equal to length of array specified and minimum one elemnt must be inside the array.other wise not allowed.
        #
    #---designated initialisation---
        # int arr[5]={[0]=1,[4]=3}
        #expect that index 0 and 4 alle are 0.
        # int arr[]={1,2,3,[5]=1,5,6,[10]=3} this also allowed remainng should be zero.if leanth is not spfied automatically set to maximum designated value of an array.
    #leanth of array
        #sizeof(array name)/sizeof(array[0])=leangth of the array 
#=====multie dimensional arrays====
    #data_type name_array[size1][size2][size3]....[sizen ]
#=====two dimensionla array========
    #int arr[3][3]={{1,2,3},{4,5,6}}
#=====multie dimensional array====
    #int arr[no of arr][row][colums]={{{1,2,3},{2,4,5}},{4,6,7},{4,5,6}};
#=====when we all or intiualize or pass the array to function it need column size
    #becuase when we all arr[][] c need colum size to calculate to find the address of the each elemnet
    #Formula is address = starting_address + (i × number_of_columns + j)
1.=============Pointer in c programming==============
    1.how the memory is allocated.
            1.int-4byte
            2.char-1byte
            3.float-4byte
        2.in computer ram each block capable to store 1 byte and each one have adrees.while executing the programm .if that hae int that allocate the 4 blocks.and each byte have each address.
        3.block start with 0 and ect.
        4.ex;if int a;in address a int 203.
    2.pointers 
        1.pointer that store the address of the another variable.
        2.ex:int a;at 204 location.
        3.int *p;*is defined for trhe variabl to store the address of another variable.p at 65 locatin.
        4.p=&a;now p contain the address of the a.that is 24 
        5.printf(&p);&p give the addres of the p that is 65.
        6.& works like a opertor that gives the address of the variable.
        7.if you wan to char pointer define char *p;if you wan t int pointer variable int *p; if you want double ointer variable double *p;we can't use deffrent data type pointer to store address of another data type variable.