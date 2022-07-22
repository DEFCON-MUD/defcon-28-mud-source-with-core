inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Company Office" );
  set_long( "Welcome to to my terrible copy of an amazing game, coremud.org 4000 is the source of this entire copy. I did this as an exercise to see if I could reliably port Dave Shays Coremud to DGD and allow him to get around original license restrictions of the MudOS driver set. The lib isn't complete, and he's got zero time for this given the floods and other stuff in his area.\n\nInstead I've decided to make this game and some of its quests that I recoded available for a contest for you to find 5 golden ticket codes. These codes will unlock the purchase of one derbycon ticket each. The first person to find the ticket via quest or otherwise in the game and then purchase a ticket with it win. There will be no replacement ticket codes so if somebody beats you to the punch thats too bad. I may hide duplicates of various tickets because this game is really big. There will be bugs, and I am not sorry. Check back here for hints." );

 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-20z0.c"
  ]) );
}
