inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 39, 3 }));
  set_short( "Corridor - x15y39z3" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y40z3.c",
  "south" : DIR+"/rooms/x15y38z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
