inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 14, 5 }));
  set_short( "Hallway - x57y14z5" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y14z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
