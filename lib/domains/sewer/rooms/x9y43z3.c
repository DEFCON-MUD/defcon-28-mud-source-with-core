inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 43, 3 }));
  set_short( "Corridor - x9y43z3" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y44z3.c",
  "south" : DIR+"/rooms/x9y42z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
