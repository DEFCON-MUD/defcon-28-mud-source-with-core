inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 15, 7 }));
  set_short( "Hallway - x3y15z7" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y16z7.c",
  "south" : DIR+"/rooms/x3y14z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
