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