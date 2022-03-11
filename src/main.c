#include <locale.h>
#include <curses.h>
#include <stdlib.h>


int
main (int argc, char *argv[])
{
  setlocale(LC_ALL, "");
  initscr();
  start_color();
  init_pair(1, COLOR_YELLOW, COLOR_GREEN);
  attron(COLOR_PAIR(1));
  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_GREEN, COLOR_BLACK);

  attron(COLOR_PAIR(1));
  mvprintw(1,0,"┠");
  attron(COLOR_PAIR(2));
  mvprintw(1,1,"─┤P├───(S)─┨");
  attron(COLOR_PAIR(2));
  mvprintw(2,0,"  ┌─┐        ");
  mvprintw(3,0,"  ┤ │        ");
  mvprintw(4,0,"┠─┤>├───(S)─┨");
  mvprintw(5,0,"  ┤ │         ");
  mvprintw(6,0,"  └─┘        ");
  mvprintw(7,0,"┠─┤P├───(S)─┨");
  mvprintw(8,0,"┠─┤u├───────┨");


  getch();
  endwin();

  return EXIT_SUCCESS;
}

/* #include <stdio.h> */
/* #include <sys/time.h> */
/* #include <unistd.h> */
/* #include <curses.h> */
/* #include <locale.h> */

/* int main(int argc, char *argv[]) { */
/*     setlocale(LC_ALL, ""); */
/*     initscr(); */
/*     curs_set(0); */
/*     /\* clear(); *\/ */

/*     /\* for(;;){ *\/ */
/*     mvprintw(2,2,"x=m"); */
/*     mvprintw(1,0,"┠─┤P├───(S)─┨"); */
/*     /\* mvprintw(2,0,"  ┌─┐        \n"); *\/ */
/*     /\* mvprintw(2,0,"┠─┤>├───(S)─┨\n"); *\/ */
/*     /\* mvprintw(2,0,"  └─┘        \n"); *\/ */
/*     /\* mvprintw(3,0,"\n\n┠─┤P├───(S)─┨\n"); *\/ */
/*     /\* mvprintw(4,0,"┠─┤u├───────┨\n"); *\/ */
/*     /\* } *\/ */
/*     refresh(); */
/*     /\* usleep(2000); *\/ */
/*     sleep(1); */
/*     endwin(); */
/* } */
