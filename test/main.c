
#include "../header/ft_printf.h"
#include <limits.h>
#include <stdio.h>

// void decimal_checker()
// {
// 	printf("\n<|######--LEFT  D  ALIGN--######|>\n");

// 	ft_printf("my: %d|\n", 0);
// 	printf("og: %d|\n", 0);
// 	ft_printf("my: %d|\n", -7);
// 	printf("og: %d|\n", -7);
// 	ft_printf("my: %d|\n", 1560133635);
// 	printf("og: %d|\n", 1560133635);
// 	ft_printf("my: %d|\n", -2035065302);
// 	printf("og: %d|\n", -2035065302);

// 	// PLUS
// 	printf("\n<|###############D#############|>\n");

// 	ft_printf("my: %+14d|\n", 0);
// 	printf("og: %+14d|\n", 0);
// 	ft_printf("my: %+1d|\n", 12);
// 	printf("og: %+1d|\n", 12);
// 	ft_printf("my: %+14d|\n", -7);
// 	printf("og: %+14d|\n", -7);
// 	ft_printf("my: %14d|\n", -8);
// 	printf("og: %14d|\n", -8);
// 	ft_printf("my: %+14d|\n", 1560133635);
// 	printf("og: %+14d|\n", 1560133635);
// 	ft_printf("my: %+14d|\n", -2035065302);
// 	printf("og: %+14d|\n", -2035065302);

// 	// SPACE
// 	printf("\n<|##############D##############|>\n");

// 	ft_printf("my: %05d|\n", 0);
// 	printf("og: %05d|\n", 0);
// 	ft_printf("my: %05d|\n", -7);
// 	printf("og: %05d|\n", -7);
// 	ft_printf("my: %012d|\n", 120);
// 	printf("og: %012d|\n", 120);
// 	ft_printf("my: %12d|\n", 31);
// 	printf("og: %12d|\n", 31);
// 	ft_printf("my: %12d|\n", -32);
// 	printf("og: %12d|\n", -32);
// 	ft_printf("my: %05d|\n", 1560133635);
// 	printf("og: %05d|\n", 1560133635);
// 	ft_printf("my: %05d|\n", -2035065302);
// 	printf("og: %05d|\n", -2035065302);

// 	printf("\n<|########--PRECISION-D-#######|>\n");

// 	ft_printf("my: %+.9d|\n", 7);
// 	printf("og: %+.9d|\n", 7);
// 	ft_printf("my: %+.9d|\n", -7);
// 	printf("og: %+.9d|\n", -7);
// 	ft_printf("my: %23.15d|\n", 722);
// 	printf("og: %23.15d|\n", 722);
// 	;
// 	ft_printf("my: %15.23d|\n", 222);
// 	printf("og: %15.23d|\n", 222);
// 	;
// 	ft_printf("my: %+.5d|\n", 1);
// 	printf("og: %+.5d|\n", 1);
// 	ft_printf("my: %+.1d|\n", 5);
// 	printf("og: %+.1d|\n", 5);
// 	ft_printf("my: %.d|\n", 6);
// 	printf("og: %.d|\n", 6);

// 	printf("\n<|######--RIGHT D ALIGN--######|>\n");
// 	// RIGHT ALIGN
// 	ft_printf("my: %+-5d|\n", 0);
// 	printf("og: %+-5d|\n", 0);
// 	ft_printf("my: %+-5d|\n", -7);
// 	printf("og: %+-5d|\n", -7);
// 	ft_printf("my: %+-5d|\n", 1560133635);
// 	printf("og: %+-5d|\n", 1560133635);
// 	ft_printf("my: %+-5d|\n", -2035065302);
// 	printf("og: %+-5d|\n", -2035065302);

// 	printf("\n<|#################D###########|>\n");

// 	ft_printf("my: %-05d|\n", 0);
// 	printf("og: %-05d|\n", 0);
// 	ft_printf("my: %-05d|\n", -7);
// 	printf("og: %-05d|\n", -7);
// 	ft_printf("my: %-012d|\n", 120);
// 	printf("og: %-012d|\n", 120);
// 	ft_printf("my: %-012d|\n", -120);
// 	printf("og: %-012d|\n", -120);
// 	ft_printf("my: %-05d|\n", 1560133635);
// 	printf("og: %-05d|\n", 1560133635);
// 	ft_printf("my: %-05d|\n", -2035065302);
// 	printf("og: %-05d|\n", -2035065302);

// 	printf("\n<|########--PRECISION-D-#######|>\n");

// 	ft_printf("my: %-23.15d|\n", 222);
// 	printf("og: %-23.15d|\n", 222);
// 	;
// 	ft_printf("my: %-15.23d|\n", 222);
// 	printf("og: %-15.23d|\n", 222);
// 	;
// 	ft_printf("my: %-+.9d|\n", 7);
// 	printf("og: %-+.9d|\n", 7);
// 	ft_printf("my: %-+.9d|\n", -7);
// 	printf("og: %-+.9d|\n", -7);
// 	ft_printf("my: %-.15d|\n", 722);
// 	printf("og: %-.15d|\n", 722);
// 	;
// 	ft_printf("my: %-+.5d|\n", 1);
// 	printf("og: %-+.5d|\n", 1);
// 	ft_printf("my: %-+5.5d|\n", 1);
// 	printf("og: %-+5.5d|\n", 1);
// 	ft_printf("my: %-+.1d|\n", 5);
// 	printf("og: %-+.1d|\n", 5);
// 	ft_printf("my: %-.d|\n", 6);
// 	printf("og: %-.d|\n", 6);

// 	printf("\n<|###############D#############|>\n");
// }

// void unsigned_decimal_checker()
// {
// 	printf("\n<|############Uuuuu################|>\n");

// 	ft_printf("my: %u|\n", 0);
// 	printf("og: %u|\n", 0);
// 	ft_printf("my: %u|\n", -7);
// 	printf("og: %u|\n", -7);
// 	ft_printf("my: %u|\n", 1560133635);
// 	printf("og: %u|\n", 1560133635);
// 	ft_printf("my: %u|\n", -2035065302);
// 	printf("og: %u|\n", -2035065302);

// 	// PLUS
// 	printf("\n<|###############uuuuu#############|>\n");

// 	ft_printf("my: %+14u|\n", 0);
// 	printf("og: %+14u|\n", 0);
// 	ft_printf("my: %+14u|\n", 12);
// 	printf("og: %+14u|\n", 12);
// 	ft_printf("my: %+14u|\n", -7);
// 	printf("og: %+14u|\n", -7);
// 	ft_printf("my: %+14u|\n", 1560133635);
// 	printf("og: %+14u|\n", 1560133635);
// 	ft_printf("my: %+14u|\n", -2035065302);
// 	printf("og: %+14u|\n", -2035065302);
// 	ft_printf("my: %23.15u|\n", 722);
// 	printf("og: %23.15u|\n", 722);
// 	;
// 	ft_printf("my: %15.23u|\n", 222);
// 	printf("og: %15.23u|\n", 222);
// 	;

// 	// SPACE
// 	printf("\n<|##############uuuu##############|>\n");

// 	ft_printf("my: %05u|\n", 0);
// 	printf("og: %05u|\n", 0);
// 	ft_printf("my: %05u|\n", -7);
// 	printf("og: %05u|\n", -7);
// 	ft_printf("my: %012u|\n", 120);
// 	printf("og: %012u|\n", 120);
// 	ft_printf("my: %05u|\n", 1560133635);
// 	printf("og: %05u|\n", 1560133635);
// 	ft_printf("my: %05u|\n", -2035065302);
// 	printf("og: %05u|\n", -2035065302);

// 	printf("\n<|######--RIGHT uuu ALIGN--######|>\n");
// 	// RIGHT ALIGN
// 	ft_printf("my: %+-5u|\n", 0);
// 	printf("og: %+-5u|\n", 0);
// 	ft_printf("my: %+-5u|\n", -7);
// 	printf("og: %+-5u|\n", -7);
// 	ft_printf("my: %+-5u|\n", 1560133635);
// 	printf("og: %+-5u|\n", 1560133635);
// 	ft_printf("my: %+-5u|\n", -2035065302);
// 	printf("og: %+-5u|\n", -2035065302);

// 	printf("\n<|###############uuu#############|>\n");

// 	ft_printf("my: %-23.15u|\n", 722);
// 	printf("og: %-23.15u|\n", 722);
// 	;
// 	ft_printf("my: %-15.23u|\n", 222);
// 	printf("og: %-15.23u|\n", 222);
// 	;
// 	ft_printf("my: %-05u|\n", 0);
// 	printf("og: %-05u|\n", 0);
// 	ft_printf("my: %-05u|\n", -7);
// 	printf("og: %-05u|\n", -7);
// 	ft_printf("my: %-012u|\n", 120);
// 	printf("og: %-012u|\n", 120);
// 	ft_printf("my: %-012u|\n", -120);
// 	printf("og: %-012u|\n", -120);
// 	ft_printf("my: %-05u|\n", 1560133635);
// 	printf("og: %-05u|\n", 1560133635);
// 	ft_printf("my: %-05u|\n", -2035065302);
// 	printf("og: %-05u|\n", -2035065302);

// 	printf("\n<|########--PRECISIOuuuuuN--#######|>\n");

// 	ft_printf("my: %-+.9u|\n", 7);
// 	printf("og: %-+.9u|\n", 7);
// 	ft_printf("my: %-+.9u|\n", -7);
// 	printf("og: %-+.9u|\n", -7);
// 	ft_printf("my: %-.15u|\n", 722);
// 	printf("og: %-.15u|\n", 722);
// 	;
// 	ft_printf("my: %-+.5u|\n", 7);
// 	printf("og: %-+.5u|\n", 7);
// 	ft_printf("my: %-+.1u|\n", 7);
// 	printf("og: %-+.1u|\n", 7);
// 	ft_printf("my: %-+5.5u|\n", 321);
// 	printf("og: %-+5.5u|\n", 321);
// 	ft_printf("my: %-.u|\n", 7);
// 	printf("og: %-.u|\n", 7);
// 	ft_printf("my: %-+.0u|\n", 0);
// 	printf("og: %-+.0u|\n", 0);

// 	printf("\n<|############################|>\n");
// }

// void hex_checker()
// {
// 	printf("\n<|######--LEFT  xxxx ALIGN--######|>\n");

// 	ft_printf("my: %x|\n", 0);
// 	printf("og: %x|\n", 0);
// 	ft_printf("my: %x|\n", -7);
// 	printf("og: %x|\n", -7);
// 	ft_printf("my: %x|\n", 1560133635);
// 	printf("og: %x|\n", 1560133635);
// 	ft_printf("my: %x|\n", -2035065302);
// 	printf("og: %x|\n", -2035065302);
// 	ft_printf("my: %.x|\n", 7);
// 	printf("og: %.x|\n", 7);

// 	// PLUS
// 	printf("\n<|###############xxxxx#############|>\n");

// 	ft_printf("my: %+15x|\n", 0);
// 	printf("og: %+15x|\n", 0);
// 	ft_printf("my: %+14x|\n", 12);
// 	printf("og: %+14x|\n", 12);
// 	ft_printf("my: %+14x|\n", -7);
// 	printf("og: %+14x|\n", -7);
// 	ft_printf("my: %+14x|\n", 1560133635);
// 	printf("og: %+14x|\n", 1560133635);
// 	ft_printf("my: %+14x|\n", -2035065302);
// 	printf("og: %+14x|\n", -2035065302);
// 	printf("\n<|##########xxxxx##################|>\n");
// 	printf("|%d\n", ft_printf("%#.22X et %020.14jx", 0xff1144ff1144, 0xffaabbccee));
// 	printf("|%d\n", printf("%#.22X et %020.14jx", 0xff1144ff1144, 0xffaabbccee));
// 	printf("|%d\n", ft_printf("%0#10.0x", 12345));
// 	printf("|%d\n", printf("%0#10.0x", 12345));
// 	printf("|%d\n", ft_printf("!% -2.2hhi!", 0));
// 	printf("|%d\n", printf("!% -2.2hhi!", 0));
// 	printf("|%d\n", ft_printf("%+16.2hi>------------<", 1942176553));
// 	printf("|%d\n", printf("%+16.2hi>------------<", 1942176553));
// 	printf("|%d\n", ft_printf("%+2i", 0));
// 	printf("|%d\n", printf("%+2i", 0));
// 	printf("|%d\n", ft_printf("% 2.10i", -1322718800));
// 	printf("|%d\n", printf("% 2.10i", -1322718800));
// 	printf("|%d\n", printf("!%+51hhi!", 0));
// 	printf("|%d\n", ft_printf("!%+51hhi!", 0));
// 	ft_printf("% 2.2hhi^.^/", 874691794);
// 	printf("% 2.2hhi^.^/", 874691794);
// 	ft_printf("my: %#+13.10lx|\n", 0);
// 	printf("og: %#+13.10lx|\n", 0);
// 	ft_printf("my: %#+16.5lx|\n", 42);
// 	printf("og: %#+16.5lx|\n", 42);
// 	;
// 	ft_printf("my: %#+6.15lx|\n", 42);
// 	printf("og: %#+6.15lx|\n", 42);
// 	;
// 	ft_printf("my: %#+5x|\n", -7);
// 	printf("og: %#+5x|\n", -7);
// 	ft_printf("my: %+5x|\n", 1560133635);
// 	printf("og: %+5x|\n", 1560133635);
// 	ft_printf("my: %+5x|\n", -2035065302);
// 	printf("og: %+5x|\n", -2035065302);

// 	printf("\n<|############xxxxx################|>\n");

// 	ft_printf("my: %5x|\n", 0);
// 	printf("og: %5x|\n", 0);
// 	ft_printf("my: %05x|\n", -7);
// 	printf("og: %05x|\n", -7);
// 	ft_printf("my: %012x|\n", 120);
// 	printf("og: %012x|\n", 120);
// 	ft_printf("my: %012x|\n", -120);
// 	printf("og: %012x|\n", -120);
// 	ft_printf("my: %#05x|\n", 1560133635);
// 	printf("og: %#05x|\n", 1560133635);
// 	ft_printf("my: %05x|\n", -2035065302);
// 	printf("og: %05x|\n", -2035065302);
// 	ft_printf("my: %10.7x|\n", 123456);
// 	printf("og: %10.7x|\n", 123456);
// 	ft_printf("my: %10.05x|\n", 123456);
// 	printf("og: %10.05x|\n", 123456);

// 	printf("\n<|######--RIGHT xxxxx ALIGN--######|>\n");
// 	// RIGHT ALIGN
// 	ft_printf("my: %#-+13.5lx|\n", 0);
// 	printf("og: %#-+13.5lx|\n", 0);
// 	ft_printf("my: %#-+16.5lx|\n", 42);
// 	printf("og: %#-+16.5lx|\n", 42);
// 	ft_printf("my: %#-+13.5lx|\n", 0);
// 	printf("og: %#-+13.5lx|\n", 0);
// 	ft_printf("my: %#-+16.5lx|\n", 42);
// 	printf("og: %#-+16.5lx|\n", 42);

// 	ft_printf("my: %#+-5x|\n", -7);
// 	printf("og: %#+-5x|\n", -7);
// 	ft_printf("my: %+-5x|\n", 1560133635);
// 	printf("og: %+-5x|\n", 1560133635);
// 	ft_printf("my: %+-5x|\n", -2035065302);
// 	printf("og: %+-5x|\n", -2035065302);
// 	ft_printf("my: %#-+6.15lx|\n", 42);
// 	printf("og: %#-+6.15lx|\n", 42);
// 	;

// 	ft_printf("my: %-24llx|\n", 331231232132112);
// 	printf("og: %-24llx|\n", 331231232132112);
// 	ft_printf("my: %-05x|\n", 0);
// 	printf("og: %-05x|\n", 0);
// 	ft_printf("my: %-05x|\n", -7);
// 	printf("og: %-05x|\n", -7);
// 	ft_printf("my: %-012x|\n", 120);
// 	printf("og: %-012x|\n", 120);
// 	ft_printf("my: %-012x|\n", -120);
// 	printf("og: %-012x|\n", -120);
// 	ft_printf("my: %#-05x|\n", 1560133635);
// 	printf("og: %#-05x|\n", 1560133635);
// 	ft_printf("my: %-05x|\n", -2035065302);
// 	printf("og: %-05x|\n", -2035065302);
// 	ft_printf("my: %-.0x|\n", 0);
// 	printf("og: %-.0x|\n", 0);

// 	printf("\n<|############################|>\n");
// }

// void octal_checker()
// {
// 	printf("\n<|######--LEFT  ooooo ALIGN--######|>\n");

// 	ft_printf("my: %o|\n", 0);
// 	printf("og: %o|\n", 0);
// 	ft_printf("my: %o|\n", -7);
// 	printf("og: %o|\n", -7);
// 	ft_printf("my: %o|\n", 1560133635);
// 	printf("og: %o|\n", 1560133635);
// 	ft_printf("my: %o|\n", -2035065302);
// 	printf("og: %o|\n", -2035065302);
// 	ft_printf("my: %.o|\n", 7);
// 	printf("og: %.o|\n", 7);

// 	// PLUS
// 	printf("\n<|##############ooooo##############|>\n");

// 	ft_printf("my: %+15o|\n", 0);
// 	printf("og: %+15o|\n", 0);
// 	ft_printf("my: %+14o|\n", 12);
// 	printf("og: %+14o|\n", 12);
// 	ft_printf("my: %+14o|\n", -7);
// 	printf("og: %+14o|\n", -7);
// 	ft_printf("my: %+14o|\n", 1560133635);
// 	printf("og: %+14o|\n", 1560133635);
// 	ft_printf("my: %+14o|\n", -2035065302);
// 	printf("og: %+14o|\n", -2035065302);

// 	printf("\n<|##############oooo##############|>\n");

// 	ft_printf("my: %#13.5lo|\n", 0);
// 	printf("og: %#13.5lo|\n", 0);
// 	ft_printf("my: %#+13.10lo|\n", 0);
// 	printf("og: %#+13.10lo|\n", 0);
// 	ft_printf("my: %#19.5lo|\n", 42);
// 	printf("og: %#19.5lo|\n", 42);
// 	ft_printf("my: %#9.15lo|\n", 12);
// 	printf("og: %#9.15lo|\n", 12);
// 	ft_printf("my: %#+16.5lo|\n", 342);
// 	printf("og: %#+16.5lo|\n", 342);
// 	ft_printf("my: %#+5o|\n", -7);
// 	printf("og: %#+5o|\n", -7);
// 	ft_printf("my: %+5o|\n", 1560133635);
// 	printf("og: %+5o|\n", 1560133635);
// 	ft_printf("my: %+5o|\n", -2035065302);
// 	printf("og: %+5o|\n", -2035065302);

// 	printf("\n<|#################oooo###########|>\n");

// 	ft_printf("my: %5o|\n", 0);
// 	printf("og: %5o|\n", 0);
// 	ft_printf("my: %05o|\n", -7);
// 	printf("og: %05o|\n", -7);
// 	ft_printf("my: %012o|\n", 120);
// 	printf("og: %012o|\n", 120);
// 	ft_printf("my: %012o|\n", -120);
// 	printf("og: %012o|\n", -120);
// 	ft_printf("my: %#05o|\n", 1560133635);
// 	printf("og: %#05o|\n", 1560133635);
// 	ft_printf("my: %05o|\n", -2035065302);
// 	printf("og: %05o|\n", -2035065302);
// 	ft_printf("my: %10.07o|\n", 123456);
// 	printf("og: %10.07o|\n", 123456);
// 	ft_printf("my: %10.05o|\n", 123456);
// 	printf("og: %10.05o|\n", 123456);

// 	printf("\n<|######--RIGHToooo  ALIGN--######|>\n");
// 	// RIGHT ALIGN

// 	ft_printf("my: %#-+13.5lo|\n", 0);
// 	printf("og: %#-+13.5lo|\n", 0);
// 	ft_printf("my: %#-+16.5lo|\n", 42);
// 	printf("og: %#-+16.5lo|\n", 42);
// 	ft_printf("my: %#-+13.5lo|\n", 0);
// 	printf("og: %#-+13.5lo|\n", 0);
// 	ft_printf("my: %#-+16.5lo|\n", 42);
// 	printf("og: %#-+16.5lo|\n", 42);
// 	ft_printf("my: %#-19.5lo|\n", 42);
// 	printf("og: %#-19.5lo|\n", 42);
// 	ft_printf("my: %#-+16.5lo|\n", 342);
// 	printf("og: %#+-16.5lo|\n", 342);
// 	ft_printf("my: %#+-5o|\n", -7);
// 	printf("og: %#+-5o|\n", -7);
// 	ft_printf("my: %+-5o|\n", 1560133635);
// 	printf("og: %+-5o|\n", 1560133635);
// 	ft_printf("my: %+-5o|\n", -2035065302);
// 	printf("og: %+-5o|\n", -2035065302);

// 	ft_printf("my: %-24llo|\n", 331231232132112);
// 	printf("og: %-24llo|\n", 331231232132112);
// 	ft_printf("my: %-05o|\n", 0);
// 	printf("og: %-05o|\n", 0);
// 	ft_printf("my: %-05o|\n", -7);
// 	printf("og: %-05o|\n", -7);
// 	ft_printf("my: %-012o|\n", 120);
// 	printf("og: %-012o|\n", 120);
// 	ft_printf("my: %-012o|\n", -120);
// 	printf("og: %-012o|\n", -120);
// 	ft_printf("my: %#-05o|\n", 1560133635);
// 	printf("og: %#-05o|\n", 1560133635);
// 	ft_printf("my: %-05o|\n", -2035065302);
// 	printf("og: %-.0o|\n", -2035065302);
// 	ft_printf("my: %-.0o|\n", 0);
// 	printf("og: %-.0o|\n", 0);

// 	printf("\n<|############################|>\n");
// }

// void char_checker()
// {
//    printf("\n<|###########cccccc#################|>\n");
// 	ft_printf("my: %c|\n", '1');
// 	printf("og: %c|\n", '1');
// 	ft_printf("my: %c|\n", '3');
// 	printf("og: %c|\n", '3');
// 	ft_printf("my: %c|\n", 'c');
// 	printf("og: %c|\n", 'c');
// 	ft_printf("my: %c|\n", 'A');
// 	printf("og: %c|\n", 'A');
// 	ft_printf("my: %.c|\n", '%');
// 	printf("og: %.c|\n", '%');
// 	ft_printf("my: %-3.c|\n", 123312);
// 	printf("og: %-3.c|\n", 123312);
// }

// void float_checker()
// {
// 	// int i = 0;
// printf("\n<|###########fffffff#################|>\n");
//     ft_printf("my: %.20f|\n", 1.1);
//     printf("og: %.20f|\n", 1.1);
// 	ft_printf("my: %.20f|\n", 1.00);
// 	printf("og: %.20f|\n", 1.00);
// 	ft_printf("my: %f|\n", 1.00);
// 	printf("og: %f|\n", 1.00);
// 	ft_printf("my: %f|\n", 32.23);
// 	printf("og: %f|\n", 32.23);
// 	ft_printf("my: %.5f|\n", 122.358);
// 	printf("og: %.5f|\n", 122.358);
// 	ft_printf("my: %f|\n", -52.9);
// 	printf("og: %f|\n", -52.9);
// 	ft_printf("my: %f|\n", -9.88);
// 	printf("og: %f|\n", -9.88);
// 	ft_printf("my: %f|\n", 78.221);
// 	printf("og: %f|\n", 78.221);
// 	ft_printf("my: %.0lf|\n", 99999999.1213);
// 	printf("og: %.0lf|\n", 99999999.1213);
// 	ft_printf("my: %f|\n", 0.1223);
// 	printf("og: %f|\n", 0.1223);
// 	ft_printf("my: %3.f|\n", 42.123312);
// 	printf("og: %3.f|\n", 42.123312);
// 	ft_printf("my: %f|\n", 10.01010101);
// 	printf("og: %f|\n", 10.01010101);
// 	ft_printf("my: %f|\n", 0.0000);
// 	printf("og: %f|\n", 0.0000);
//    printf("TSET TEMA\n");
//    printf("%-0.f\n", 0);
//    ft_printf("%-0.f\n", 0);

// 	double ff = 89.999;
// 	ft_printf("my: %.f|\n", ff);
// 	printf("og: %.f|\n", ff);
// 	ft_printf("my: %.2f|\n", 189.999);
// 	printf("og: %.2f|\n", 189.999);
// 	ft_printf("my: %.2f|\n", 9.9999999);
// 	printf("og: %.2f|\n", 9.9999999);
// 	ft_printf("my: %.f|\n", 9.9999999);
// 	printf("og: %.f|\n", 9.9999999);

// 	ft_printf("my: %.f|\n", 999999.99);
// 	printf("og: %.f|\n", 999999.99);

// 	ft_printf("my: %5.1f|\n", 999999.99);
// 	printf("og: %5.1f|\n", 999999.99);

// 	ft_printf("my: %.2f|\n", 999999.99);
// 	printf("og: %.2f|\n", 999999.99);

// 	ft_printf("\n");
// 	ft_printf("my: %.2f|\n", 9.9999999);
// 	printf("og: %.2f|\n", 9.9999999);

// 	ft_printf("my: %.f|\n", 9.9999999);
// 	printf("og: %.f|\n", 9.9999999);

// 	ft_printf("my: %.4f|\n", 3.3399999);
// 	printf("og: %.4f|\n", 3.3399999);

// 	ft_printf("my: %+010.4f|\n", 3.3399999);
// 	printf("og: %+010.4f|\n", 3.3399999);

// 	ft_printf("my: %+10.4f|\n", 3.3399999);
// 	printf("og: %+10.4f|\n", 3.3399999);

// 	ft_printf("my: %10.4f|\n", -3.3399999);
// 	printf("og: %10.4f|\n", -3.3399999);

// 	ft_printf("my: % 010.4f|\n", -3.3399999);
// 	printf("og: % 010.4f|\n", -3.3399999);

// 	ft_printf("my: % 010.4f|\n", 3.3399999);
// 	printf("og: % 010.4f|\n", 3.3399999);

// 	ft_printf("my: % 10.4f|\n", 3.3399999);
// 	printf("og: % 10.4f|\n", 3.3399999);

// 	ft_printf("my: %#.f|\n", 999999.99);
// 	printf("og: %#.f|\n", 999999.99);
// 	ft_printf("\nRIGHT ALIGN \n");//////////////////////////

// 	ft_printf("my: %-#.f|\n", 999999.99);
// 	printf("og: %-#.f|\n", 999999.99);

// 	ft_printf("my: %.2f|\n", 9.9999999);
// 	printf("og: %.2f|\n", 9.9999999);

// 	ft_printf("my: %.f|\n", 9.9999999);
// 	printf("og: %.f|\n", 9.9999999);

// 	ft_printf("my: %-.4f|\n", 3.3399999);
// 	printf("og: %-.4f|\n", 3.3399999);

// 	ft_printf("my: %-+010.4f|\n", 3.3399999);
// 	printf("og: %-+010.4f|\n", 3.3399999);

// 	ft_printf("my: %-+10.4f|\n", 3.3399999);
// 	printf("og: %-+10.4f|\n", 3.3399999);

// 	ft_printf("my: %-10.4f|\n", -3.3399999);
// 	printf("og: %-10.4f|\n", -3.3399999);

// 	ft_printf("my: %-010.4f|\n", -3.3399999);
// 	printf("og: %-010.4f|\n", -3.3399999);

// 	ft_printf("my: %-010.4f|\n", 3.3399999);
// 	printf("og: %-010.4f|\n", 3.3399999);
// 		printf("|%d\n", printf("%+010.5d", 39999));
// 	printf("|%d\n\n", ft_printf("%+010.5d", 39999));

// 	printf("|%d\n", printf("%+010.4f", 3.3399999));
// 	printf("|%d\n\n", ft_printf("%+010.4f", 3.3399999));
// 	// ft_printf("my: %-010.4f|\n", 3.3399999);
// 	// printf("og: %-010.4f|\n", 3.3399999);
// }

// void str_checker()
// {
// 	char *s = "123456789";
// 	char *null_str;

// 	printf("\n<|###########--LEFSSSSSSSSSALIGN--###########|>\n");
// 	ft_printf("my: %s|\n", s);
// 	printf("og: %s|\n", s);
// 	ft_printf("my: %5s|\n", s);
// 	printf("og: %5s|\n", s);
// 	ft_printf("my: %15s|\n", s);
// 	printf("og: %15s|\n", s);
// 	ft_printf("my: %.5s|\n", s);
// 	printf("og: %.5s|\n", s);
// 	ft_printf("my: %.32s|\n", s);
// 	printf("og: %.32s|\n", s);
// 	ft_printf("my: %6.12s|\n", s);
// 	printf("og: %6.12s|\n", s);
// 	ft_printf("my: %12.6s|\n", s);
// 	printf("og: %12.6s|\n", s);
// 	ft_printf("my: %0s|\n", s);
// 	printf("og: %0s|\n", s);
// 	printf("\n<|###########--RIGHT SSSSALIGN--###########|>\n");
// 	ft_printf("my: %-s|\n", s);
// 	printf("og: %-s|\n", s);
// 	ft_printf("my: %-5s|\n", s);
// 	printf("og: %-5s|\n", s);
// 	ft_printf("my: %-15s|\n", s);
// 	printf("og: %-15s|\n", s);
// 	ft_printf("my: %-.5s|\n", s);
// 	printf("og: %-.5s|\n", s);
// 	ft_printf("my: %-.32s|\n", s);
// 	printf("og: %-.32s|\n", s);
// 	ft_printf("my: %-6.12s|\n", s);
// 	printf("og: %-6.12s|\n", s);
// 	ft_printf("my: %-12.6s|\n", s);
// 	printf("og: %-12.6s|\n", s);
// 	ft_printf("my: %-.0s|\n", s);
// 	printf("og: %-.0s|\n", s);

// 	printf("\n<|###########--NULL SSSSSTR--###########|>\n");
// 	printf("og: %-s|\n", NULL);
// 	ft_printf("my: %-s|\n", NULL);
// }

// void ptr_checker()
// {
// 	char *p = "123456789";
// 	char *null_str;
// 	long double *a;

// 	printf("\n<|###########--LEFT ppppppppALIGN--###########|>\n");
// 	ft_printf("my: %p|\n", p);
// 	printf("og: %p|\n", p);
// 	ft_printf("my: %5p|\n", p);
// 	printf("og: %5p|\n", p);
// 	ft_printf("my: %15p|\n", p);
// 	printf("og: %15p|\n", p);
// 	ft_printf("my: %.5p|\n", p);
// 	printf("og: %.5p|\n", p);
// 	ft_printf("my: %.32p|\n", p);
// 	printf("og: %.32p|\n", p);
// 	ft_printf("my: %6.12p|\n", p);
// 	printf("og: %6.12p|\n", p);
// 	ft_printf("my: %12.6p|\n", p);
// 	printf("og: %12.6p|\n", p);
// 	ft_printf("my: %0p|\n", p);
// 	printf("og: %0p|\n", p);
// 	printf("\n<|###########--RIGHT pppALIGN--###########|>\n");
// 	ft_printf("my: %-p|\n", p);
// 	printf("og: %-p|\n", p);
// 	ft_printf("my: %-5p|\n", p);
// 	printf("og: %-5p|\n", p);
// 	ft_printf("my: %-15p|\n", p);
// 	printf("og: %-15p|\n", p);
// 	ft_printf("my: %-.5p|\n", p);
// 	printf("og: %-.5p|\n", p);
// 	ft_printf("my: %-.32p|\n", p);
// 	printf("og: %-.32p|\n", p);
// 	ft_printf("my: %-6.12p|\n", p);
// 	printf("og: %-6.12p|\n", p);
// 	ft_printf("my: %-12.6p|\n", p);
// 	printf("og: %-12.6p|\n", p);
// 	ft_printf("my: %-.0p|\n", p);
// 	printf("og: %-.0p|\n", p);
// 	ft_printf("my: %-.0p|\n", 0);
// 	printf("og: %-.0p|\n", 0);

// 	printf("\n<|###########--NULLppppppp STR--###########|>\n");
// 	printf("og: %-p|\n", NULL);
// 	ft_printf("my: %-p|\n", NULL);
// }

// void extra_check()
// {
// 	ft_printf("%c|\n", 42);
// 	printf("%c|\n", 42);
// 	ft_printf("%5.2x|\n", 5427);
// 	printf("%5.2x|\n", 5427);
// 	int n = ft_printf("o: %#.o, %#.0o|\n", 0, 0);
// 	int m = printf("o: %#.o, %#.0o|\n", 0, 0);
// 	printf("n: %d\n", n);
// 	printf("m: %d\n", m);
// 	n = ft_printf("o5: %#5.o, %#5.0o|\n", 0, 0);
// 	m = printf("o5: %#5.o, %#5.0o|\n", 0, 0);
// 	n = ft_printf("o5: %5.o, %5.0o|\n", 0, 0);
// 	m = printf("o5: %5.o, %5.0o|\n", 0, 0);
// 	printf("n: %d\n", n);
// 	printf("m: %d\n", m);
// 	ft_printf("x with .0: %#5.x, %#5.0x|\n", 0, 0);
// 	printf("x with .0: %#5.x, %#5.0x|\n", 0, 0);
// 	ft_printf("%#6o\n", 2500);
// 	printf("%#6o\n", 2500);
// 	ft_printf("%6o\n", 2500);
// 	printf("%6o\n", 2500);
// 	ft_printf("%-5.10o\n", 2500);
// 	printf("%-5.10o\n", 2500);
// 	ft_printf("%4.s|\n", "42");
// 	printf("%4.s|\n", "42");
// 	ft_printf("%4.0s|\n", "42");
// 	printf("%4.0s!\n", "42");
// 	printf("\n");
// 	ft_printf("%5.2s|\n", "");
// 	printf("%5.2s|\n", "");
// 	ft_printf("%s|\n", "");
// 	printf("%s|\n", "");
// 	ft_printf("%5.19s|\n", "");
// 	printf("%5.19s|\n", "");
// 	ft_printf("%15.4s|\n", "42");
// 	printf("%15.4s|\n", "42");
// 	ft_printf("%5.2s is a string|\n", "this");
// 	printf("%5.2s is a string|\n", "this");
// 	ft_printf("%-5.2s is a string|\n", "");
// 	printf("%-5.2s is a string|\n", "");
// 	ft_printf("%0+5d\n", 42);
// 	printf("%0+5d\n", 42);
// 	ft_printf("%0+5d\n", -42);
// 	printf("%0+5d\n", -42);
// 	ft_printf("% 10.5d\n", 4242);
// 	printf("% 10.5d\n", 4242);
// 	ft_printf("%03.2d\n", -1);
// 	printf("%03.2d\n", -1);
// 	ft_printf("@moulitest: %.10d|\n", -42);
// 	printf("@moulitest: %.10d|\n", -42);
// 	ft_printf("@moulitest: %.d %.0d|\n", 0, 0);
// 	printf("@moulitest: %.d %.0d|\n", 0, 0);
// 	ft_printf("@moulitest: %5.d %5.0d|\n", 0, 0);
// 	printf("@moulitest: %5.d %5.0d|\n", 0, 0);
// 	ft_printf("%03.2d|\n", 0);
// 	printf("%03.2d|\n", 0);

// 	int t = ft_printf("%lld\n", -9223372036854775808);
// 	int s = printf("%lld\n", -9223372036854775808);

// 	ft_printf("%d\n", t);
// 	ft_printf("%d\n", s);
// 	unsigned short sh = 65535;
// 	ft_printf("%ll0|\n", USHRT_MAX);
// 	printf("%ll0|\n", USHRT_MAX);
// 	ft_printf("%O|\n", LONG_MIN);
// 	printf("%O|\n", LONG_MIN);
// 	ft_printf("{%05.c}\n", 0);
// 	printf("{%05.c}\n", 0);
// 	ft_printf("my %-#o|\n", 0);
// 	printf("og %-#o|\n", 0);
// 	ft_printf("my %#5o|\n", 0);
// 	printf("og %#5o|\n", 0);
// 	ft_printf("my %#14o|\n", 0);
// 	printf("og %#14o|\n", 0);
// 	ft_printf("\n%#o|\n", 0);
// 	printf("%#o|\n", 0);
// 	ft_printf("my %15.4d|\n", 424242);
// 	printf("og %15.4d|\n", 424242);
// 	ft_printf("my %15.4o|\n", 424242);
// 	printf("og %15.4o|\n", 424242);
// 	ft_printf("my %15.4u|\n", 424242);
// 	printf("og %15.4u|\n", 424242);
// 	ft_printf("my %15.4x|\n", 42);
// 	printf("og %15.4x|\n", 42);
// 	ft_printf("@moulitest: %5.d %5.0d|\n", 0, 0);
// 	printf("@moulitest: %5.d %5.0d|\n", 0, 0);
// 	ft_printf("@moulitest: %5.d %5.0d|\n", 1, 1);
// 	printf("@moulitest: %5.d %5.0d|\n", 1, 1);
// 	//  ft_printf("%");
// 	ft_printf("{% 03d}\n", 0);
// 	printf("{% 03d}\n", 0);
// 	ft_printf("{%03c}\n", 0);
// 	int cve = printf("{%03c}\n", 0);
// 	printf("%d\n", cve);
// 	ft_printf("{%05s}\n", "abc");
// 	printf("{%05s}\n", "abc");
// 	ft_printf("{%05.s}\n", "abc");
// 	printf("{%05.s}\n", "abc");
// 	ft_printf("{%05.2s}\n", "abc");
// 	printf("{%05.2s}\n", "abc");
// 	ft_printf("{%05.5s}\n", "abc");
// 	printf("{%05.5s}\n", "abc");
// 	printf("%");
// 	float fl = 12379.9;
// 	ft_printf("%.15f|\n", fl);
// 	printf("%.15f|\n", fl);
// 	ft_printf("%.8f|\n", fl);
// 	printf("%.8f|\n", fl);
// 	ft_printf("%.9f|\n", fl);
// 	printf("%.9f|\n", fl);
// 	// ft_printf("%.9f|\n", 12379.900390625000);
// 	// printf("%.9f|\n", 12379.900390625000);
// 	ft_printf("%.7lf|\n", 12379.9003906250000001L);
// 	printf("%.7lf|\n", 12379.9003906250000001);
// 	ft_printf("%.1f|\n", 12379.250000001);
// 	printf("%.1f|\n", 12379.250000001);
// }
 
 void float_checker()
{
    // int i = 0;
    int a;
    int b;
    int i = 0;
    a = ft_printf("my: %f|\n", 1.00);
    b = b = printf("og: %f|\n", 1.00);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %f|\n", 32.23);
    b = printf("og: %f|\n", 32.23);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.5f|\n", 122.358);
    b = printf("og: %.5f|\n", 122.358);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %f|\n", -52.9);
    b = printf("og: %f|\n", -52.9);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %f|\n", -9.88);
    b = printf("og: %f|\n", -9.88);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %f|\n", 78.221);
    b = printf("og: %f|\n", 78.221);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.0lf|\n", 99999999.1213);
    b = printf("og: %.0lf|\n", 99999999.1213);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %f|\n", 0.1223);
    b = printf("og: %f|\n", 0.1223);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %3.f|\n", 42.123312);
    b = printf("og: %3.f|\n", 42.123312);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %f|\n", 10.01010101);
    b = printf("og: %f|\n", 10.01010101);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %f|\n", 0.0000);
    b = printf("og: %f|\n", 0.0000);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    double ff = 89.999;
    a = ft_printf("my: %.f|\n", ff);
    b = printf("og: %.f|\n", ff);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.2f|\n", 189.999);
    b = printf("og: %.2f|\n", 189.999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.2f|\n", 9.9999999);
    b = printf("og: %.2f|\n", 9.9999999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.f|\n", 9.9999999);
    b = printf("og: %.f|\n", 9.9999999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.f|\n", 999999.99);
    b = printf("og: %.f|\n", 999999.99);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %5.1f|\n", 999999.99);
    b = printf("og: %5.1f|\n", 999999.99);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.2f|\n", 999999.99);
    b = printf("og: %.2f|\n", 999999.99);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    ft_printf("\n");
    a = ft_printf("my: %.2f|\n", 9.9999999);
    b = printf("og: %.2f|\n", 9.9999999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.f|\n", 9.9999999);
    b = printf("og: %.f|\n", 9.9999999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.4f|\n", 3.3399999);
    b = printf("og: %.4f|\n", 3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %+010.4f|\n", 3.3399999);
    b = printf("og: %+010.4f|\n", 3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %+10.4f|\n", 3.3399999);
    b = printf("og: %+10.4f|\n", 3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %10.4f|\n", -3.3399999);
    b = printf("og: %10.4f|\n", -3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: % 010.4f|\n", -3.3399999);
    b = printf("og: % 010.4f|\n", -3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: % 010.4f|\n", 3.3399999);
    b = printf("og: % 010.4f|\n", 3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: % 10.4f|\n", 3.3399999);
    b = printf("og: % 10.4f|\n", 3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %#.f|\n", 999999.99);
    b = printf("og: %#.f|\n", 999999.99);
        printf("%d)  %d - %d\n\n", i++,  a, b);ft_printf("\nRIGHT ALIGN \n");
    a = ft_printf("my: %-#.f|\n", 999999.99);
    b = printf("og: %-#.f|\n", 999999.99);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.2f|\n", 9.9999999);
    b = printf("og: %.2f|\n", 9.9999999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %.f|\n", 9.9999999);
    b = printf("og: %.f|\n", 9.9999999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %-.4f|\n", 3.3399999);
    b = printf("og: %-.4f|\n", 3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %-+010.4f|\n", 3.3399999);
    b = printf("og: %-+010.4f|\n", 3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %-+10.4f|\n", 3.3399999);
    b = printf("og: %-+10.4f|\n", 3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %-10.4f|\n", -3.3399999);
    b = printf("og: %-10.4f|\n", -3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %-010.4f|\n", -3.3399999);
    b = printf("og: %-010.4f|\n", -3.3399999);
    printf("%d)  %d - %d\n\n", i++,  a, b);
    a = ft_printf("my: %-010.4f|\n", 3.3399999);
    b = printf("og: %-010.4f|\n", 3.3399999);
        printf("%d)  %d - %d\n\n", i++,  a, b);
     
     a = ft_printf("{%.4f}\n", 1.1);
    b = printf("{%.4f}\n", 1.1);
    printf("%d - %d\n\n", a , b);
    a = ft_printf("% 10.0f|\n", 1.1);
    b = printf("% 10.0f|\n", 1.1);
    printf("%d - %d\n\n", a , b);
    a = ft_printf("%#10.0f|\n", 0.0);
    printf("%#10.0f|\n", 0.0);
    printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %0 20f|\n", -52.9);
    b = printf("og: %0 20f|\n", -52.9);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %f|\n", -9.88);
    b = printf("og: %f|\n", -9.88);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %.f|\n", 999999.99);
    b = printf("og: %.f|\n", 999999.99);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %.f|\n", 89.99);
    b = printf("og: %.f|\n", 89.99);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %3.f|\n", 42.123312);
    b = printf("og: %3.f|\n", 42.123312);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %f|\n", 1.00);
    b = printf("og: %f|\n", 1.00);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %f|\n", 32.23);
    b = printf("og: %f|\n", 32.23);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %.5f|\n", 122.358);
    b = printf("og: %.5f|\n", 122.358);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %f|\n", 78.221);
    b = printf("og: %f|\n", 78.221);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %.0lf|\n", 99999999.1213);
    b = printf("og: %.0lf|\n", 99999999.1213);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %f|\n", 0.1223);
    b = printf("og: %f|\n", 0.1223);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %f|\n", 10.01010101);
    b = printf("og: %f|\n", 10.01010101);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %f|\n", 0.0000);
    b = printf("og: %f|\n", 0.0000);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %.2f|\n", 9.9999999);
    b = printf("og: %.2f|\n", 9.9999999);
printf("%d - %d\n\n", a , b);
    a = ft_printf("my: %.f|\n", 9.9999999);
    b = printf("og: %.f|\n", 9.9999999);
    printf("a - %d b - %d\n\n", a, b);
    a = ft_printf("my: %-010.4f|\n", 3.3399999);
    b = printf("og: %-010.4f|\n", 3.3399999);
    printf("a - %d b - %d\n\n", a, b);
    a = printf("{%f}\n", 1.42);
    b = ft_printf("{%f}\n", 1.42);
    printf("%d - %d\n\n", a , b);
    a = printf("{%f}\n", -1.42);
    b = ft_printf("{%f}\n", -1.42);
    printf("%d - %d\n\n", a , b);
    a = printf("{%f}\n", 1444565444646.6465424242242);
    b = ft_printf("{%f}\n", 1444565444646.6465424242242);
    printf("%d - %d\n\n", a , b);
    a = printf("{%f}\n", -1444565444646.6465424242242454654);
    b = ft_printf("{%f}\n", -1444565444646.6465424242242454654);
    printf("%d - %d\n\n", a , b);
	a = printf("%.100f\n", 1.2);
    b = ft_printf("%.100f\n", 1.2);
    printf("%d - %d\n\n", a , b);
}

int main(void)
{
	// ft_printf("%s", -1000);
	// int integer = 1223;
	// float real_num = 0.231;
	// char c = 'a';
	// char *c_ptr = &c;
	// char *str = "string!";
	// int n = 221322;
	// decimal_checker();
	// unsigned_decimal_checker();
	// hex_checker();
	// octal_checker();
	// char_checker();

	float_checker();
	// ft_printf("%.20f\n", 1.2);
	// printf("%.20f\n", 1.2);
	// str_checker();
	// ptr_checker();
	// int fm = ft_printf("%s\n", 0);
	// int fa = printf("%s\n", 0);
	// printf("%d\n", fa);
	// printf("%d\n", fm);
	// extra_check();
	// long int lnb = LONG_MAX;
	// long int lnb_neg = LONG_MIN;
	// long int lnb_0 = 0;
	// double a = 13211233212312313212312311233121233211111111111111111111111111111111111111111111111111111111111123231231231.; //22
	// double t = 2131.6;
	// float f = 6.800000190734863;
	// long double b = 1111111111111111111111.2231;
	// printf("test: %.12Lf\n", b);
	// printf("test: %.12Lf\n", b);

	// 	printf("converted: %s\n", long_double_to_str(a, 150));
	// 	printf("real:	   %.150Lf\n", a);
	return (0);
}
// int main(void)
// {
   // write(1, "\n", 1);
   // ft_putnbr(printf("q"));
  //  write(1, "\n", 1);
// ft_putnbr(ft_printf("hello"));
//printf("%%");
//ft_putnbr(ft_printf("my name %s, who you, me %s, is %c, %s %% %5c", "Vitia", "natasha", 'R', "poka", 'T'));
   // ft_printf("my name %s i love sim (%c) my nick %10s. My test %5c end %%\n", "Viktor", 'T', "Tmann", 'C');
   //ft_putnbr(ft_printf("Hello my name %s, i like sim %c", "Vitia", 'A'));
//   ft_printf("hello my name is %s, i like sim %c, my year %d, %%\n", "Viktor", 'c', 27);
// ft_putnbr(ft_printf("%lu\n", -42));
//
 	
	
	// printf("%d\n", ft_printf("%-5lu", (unsigned long)-20));
	// printf("%d\n", printf("%-5lu", (unsigned long)-20));

   // printf("%d|\n", printf("%.0s\n%s%---12s", "hi", "coco", NULL));
   // printf("%d|\n", ft_printf("%.0s\n%s%---12s", "hi", "coco", NULL));

   // printf("%d|\n", printf("Coucou %.0s\n%s%---12s", "hi", "coco", NULL));
   // printf("\n");
   // printf("%d|\n", ft_printf("Coucou %.0s\n%s%---12s", "hi", "coco", NULL));


   // printf("%d\n", printf("%#x", 42));
   // printf("\n");
   // printf("%d\n", ft_printf("%#x", 42));

   // printf("%d\n", printf("%#7.5X%0006.2x et %lX!", 0xab, 0x876, 0xff11ff11ff1));
   // printf("\n");
   // printf("%d\n", ft_printf("%#7.5X%0006.2x et %lX!", 0xab, 0x876, 0xff11ff11ff1));

   // ft_printf("%lld", -9223372036854775808);
      // ft_printf("%s", -92233720);

   // printf("%d\n", printf("%---10.6xet\n", 0xaabb));
   // printf("%d\n", ft_printf("%---10.6xet\n", 0xaabb));

   // printf("|%d\n", printf("%#.4X et %#0012x %#04hX !!", 0xaef, 0xe, (unsigned short)0));
   // printf("\n");
   // printf("|%d\n", ft_printf("%#.4X et %#0012x %#04hX !!", 0xaef, 0xe, (unsigned short)0));
   
   // printf("|%d\n", printf("%0##0.4X %#4.2Xet c'est fini \n", 0x037a, 0x9e));
   // printf("\n");
   // printf("|%d\n", ft_printf("%0##0.4X %#4.2Xet c'est fini \n", 0x037a, 0x9e));

   // printf("|%d\n", printf("%###.5x", 0));
   // printf("\n");
   // printf("|%d\n", ft_printf("%###.5x", 0));


   // <_____>
//    printf("\n");
//    ft_printf("{% 03d}", 0);
//    printf("\n");
//    printf("{% 03d}", 0);
// printf("\n");

   // printf("%lc, %lc", L'ÊM-^ZM-^V', L'ÿ≠');
   // printf("\n");
   // ft_printf("%lc, %lc", L'ÊM-^ZM-^V', L'ÿ≠');

   // char *a = ft_strdup("123");
   // printf("%p", NULL);
   // printf("\n");
   // ft_printf("%p", NULL);
   // printf("%d", printf("%2.9p", 1234));
   // printf("\n");
   // printf("%d", ft_printf("%2.9p", 1234));
   // printf("\n");

   // printf("%d", printf("42%42.40i42", -1119552356));
   // printf("\n");
   // printf("%d", ft_printf("42%42.40i42", -1119552356));
   // printf("\n");

   // printf("|%d", printf("%-10.2s!!", 0x45));
   // printf("\n");
   // printf("|%d", ft_printf("%-10.2s!!", "0x45"));
   // printf("\n");

// printf("|%d\n", printf   ("or %0#42.6llX", -2107738761));
// printf("|%d\n", ft_printf("my %0#42.6llX", -2107738761));

// printf("or = %0#10.0X %0#X\n", 12345, 0);
// ft_printf("my = %0#10.0X %0#X\n\n", 12345, 0);

// printf("or = %#48.2llX\n", 1985512325);
// ft_printf("my = %#48.2llX\n\n", 1985512325);

// ft_printf("my 42%-#52.5llX42", 401929328);
// printf("\n");
// printf   ("or 42%-#52.5llX42", 401929328);
// printf("\n");

// printf   ("or!%#-47.2hX!\n", -2143056240);
// ft_printf("my!%#-47.2hX!\n\n", -2143056240);

// printf   ("or = %0#10.0X!\n", 0);
// ft_printf("my = %0#10.0X!\n\n", 0);


// printf("or = %#48.2llX!!!\n", 1985512325);
// ft_printf("my = %#48.2llX!!!\n\n", 1985512325);

// printf("%d|\n", printf   ("or %-#58.1hhX!", -775135724));
// printf("%d|\n\n", ft_printf("my %-#58.1hhX!", -775135724));


//    ft_printf("%10X\n", 42);
//    printf("%10X\n\n", 42);
//    printf("%010X\n", 542);
//    ft_printf("%010X\n\n", 542);
//    printf("%#08X\n", 42);
//    ft_printf("%#08X\n", 42);
// 	     printf("%d|\n", ft_printf("%0#10.0X", 12345));
// 	      printf("%d|\n\n", printf("%0#10.0X", 12345));
//    printf("%d|\n", printf("^.^/%#20.8hX^.^/" , 0));
//    printf("%d|\n\n", ft_printf("^.^/%#20.8hX^.^/", 0));

//        printf("%d|\n", printf("%#.4X et %#0012X %#04hX !!", 0xaef, 0xe, (unsigned short)0));
//    printf("%d|\n\n", ft_printf("%#.4X et %#0012X %#04hX !!", 0xaef, 0xe, (unsigned short)0));

//        printf("%d|\n", printf("%0006.2X et %lX!", 0x876, 0xff11ff11ff1));
//    printf("%d|\n\n", ft_printf("%0006.2X et %lX!", 0x876, 0xff11ff11ff1));
//     printf("%d\n\n", printf("%-12hhX", 23695));
// 	printf( "%d\n", ft_printf("%-12hhX", 23695));

//    printf( "%d\n", ft_printf("%#.4x et %#0012x %#04hx !!", 0xaef, 0xe, (unsigned short)0));
//     printf("%d\n\n", printf("%#.4x et %#0012x %#04hx !!", 0xaef, 0xe, (unsigned short)0));
// printf("%Lf", (long double)15.0);
// ft_printf("%f", 15.123);
//   	return (0);
// }

// int main(void)
// {
//    printf("|%d\n", printf("%12f", -12.32));
//    printf("|%d\n\n", ft_printf("%12f", -12.32));
//    return 0;
// }