/* print_binary */
int _print_binary(va_list args)
{
    unsigned int num;
    int i, len;
    char *str;
    char *rev_str;
    num = va_arg(args, unsigned int);
    if (!num)
        return (_write(&#39;0&#39;));
    if (num &lt; 1)
        return (-1);
    len = base_len(num, 2);
    str = malloc(sizeof(char) * len + 1);
    if (!str)
        return (-1);
    for (i = 0; num &gt; 0; i++)
    {
        if (num % 2 == 0)
            str[i] = &#39;0&#39;;
        else
            str[i] = &#39;1&#39;;
        num /= 2;
    }
    str[i] = &#39;\0&#39;;
    rev_str = rev_string(str);
    if (!rev_str)
        return (-1);
    write_base(rev_str);
    free(str);
    free(rev_str);
    return (len);
}
/* print_octal */
int _print_octal(va_list args)
{
    unsigned int num;
    int len;

    char *octal_rep;
    char *rev_str;
    num = va_arg(list, unsigned int);
    if (!num)
        return (_write(&#39;0&#39;));
    if (num &lt; 1)
        return (-1);
    len = base_len(num, 8);
    octal_rep = malloc(sizeof(char) * len + 1);
    if (!octal_rep)
        return (-1);
    for (len = 0; num &gt; 0; len++)
    {
        octal_rep[len] = (num % 8) + 48;
        num /= 8;
    }
    octal_rep[len] = &#39;\0&#39;;
    rev_str = rev_string(octal_rep);
    if (!rev_str)
        return (-1);
    write_base(rev_str);
    free(octal_rep);
    free(rev_str);
    return (len);
}
/* print_hex */
int print_hex(va_list args)
{
    unsigned int num;
    int len;
    int rem_num;
    char *hex_rep;
    char *rev_hex;
    num = va_arg(list, unsigned int);
    if (!num)
        return (_write(&#39;0&#39;));
    if (num &lt; 1)

        return (-1);
    len = base_len(num, 16);
    hex_rep = malloc(sizeof(char) * len + 1);
    if (!hex_rep)
        return (-1);
    for (len = 0; num &gt; 0; len++)
    {
        rem_num = num % 16;
        if (rem_num &gt; 9)
        {
            rem_num = hex_check(rem_num, &#39;x&#39;);
            hex_rep[len] = rem_num;
        }
        else
            hex_rep[len] = rem_num + 48;
        num /= 16;
    }
    hex_rep[len] = &#39;\0&#39;;
    rev_hex = rev_string(hex_rep);
    if (!rev_hex)
        return (-1);
    write_base(rev_hex);
    free(hex_rep);
    free(rev_hex);
    return (len);
}


