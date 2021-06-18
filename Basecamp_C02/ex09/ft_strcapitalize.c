char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while(*(str + i) != '\0')
	{
		if(*(str + i) >= 65 && *(str + i) <= 90)
			{
				*(str + i) = *(str + i) + 32;
			}
		if((*(str + i) >= 97 && *(str + i) <= 122) && ((*(str + i -1) >= 32) && (*(str + i -1) <= 47) || (*(str + i -1) >= 58) && (*(str + i -1) <= 64)))
		{
			*(str + i) = *(str + i) - 32;
			i++;
		}
		else if(str[0] >= 97 && str[0] <= 122)
        {
            str[0] = str[0] - 32;
			i++;
        }        
		else
		i++;
	}

	return(str);
}

int    main(void)
{
    char str1[] = "alo maluco a2beleza!";
    char str2[] = "alo/maluco/a2beleza!";
    char str3[] = "alo+maluco+a2beleza!";
    char str4[] = "alo-maluco-a2beleza!";
    char str5[] = "alo; maluco; a2beleza!";
    char str6[] = "alo? maluco% a2beleza!";

    printf("str1: %s\n", str1);
    ft_strcapitalize(str1);
    printf("str1_c: %s\n", str1);
    printf("str2: %s\n", str2);
    ft_strcapitalize(str2);
    printf("str2_c: %s\n", str2);
    printf("str3: %s\n", str3);
    ft_strcapitalize(str3);
    printf("str3_c: %s\n", str3);
    printf("str4: %s\n", str4);
    ft_strcapitalize(str4);
    printf("str4_c: %s\n", str4);
    printf("str5: %s\n", str5);
    ft_strcapitalize(str5);
    printf("str5_c: %s\n", str5);
    printf("str6: %s\n", str6);
    ft_strcapitalize(str6);
    printf("str6_c: %s\n", str6);
    return (0);
}