# Libarray made by Ratouney

Usage of the library :

    Open a terminal and type [make re]
    If no error appears, you will have a [libratarray.a] file
    To use the library, just add it to your gcc compilation sources


Creation of an Array :

    t_charray *newcharray(int size)

    [Size]
        Number of [char *] to be contained in the Array
    
    [RETURN]
        Returns a structure with the array (and some other stuff)


Import existing [Char **] :

    [Function]
        t_charray *calib_import(char **tab, int size)
    [MACRO]
        la_imp(tab, size)

    [Tab]
        Existing array to Import
    
    [Size]
        Size of the array, if unknown, set it to -1 and it will parse
        up to the first NULL string.

    [RETURN]
        A structure with the given array


Export to [Char **] ;

    [Function]
        char **calib_export(t_charray *data, int mode)
    [MACRO]
        la_exp(data, mode)
        
    [Data]
        Array structure with desired content
    
    [Mode]
        Free's the given strucute upon Export
    
    [RETURN]
        The array contained in the structure


Add content to the array :

    [Function]
        void calib_write(t_charray *data, char *str, int pos, int mode)
    [MACRO]
        la_write(data, str, pos, mode)

    [Data]
        Array to write into

    [Str]
        String to write into the array case

    [Pos]
        Indicated the position in the array of the string to be written

    [Mode]
        Use macro's for this stage :
        [LA_SN] : Soft mode
        [LA_SF] : Soft mode free's [Str]
        [LA_BN] : Overwrite content
        [LA_BF] ; Overwrite content and free [STR]


Show content of the array :

    [Function]
        void calib_show(t_charray *data)
    [MACRO]
        la_show(data)

    [Data]
        Display content of this array (using write(1))


Copy array into another :

    [Function]
        t_charray calib_copy(t_charray *data)
    [MACRO]
        la_copy(t_charray *from, t_charray *to)

    [Data | From]
        Array to copy

    [To]
        Copy array into this

    [RETURN]
        Returns a copy of [Data]


Delete an array (to avoid leaks) :

    [Function]
        void destroy_charray(t_charray *data)
    [MACRO]
        la_free(data)

    [Data]
        Array to be deleted (content and structure will be free'd)
