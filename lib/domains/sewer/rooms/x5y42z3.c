inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 3 }));
  set_short( "Corridor - x5y42z3" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y42z3.c",
  "south" : DIR+"/rooms/x5y41z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
