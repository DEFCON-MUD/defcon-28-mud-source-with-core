inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 26, 3 }));
  set_short( "Hallway - x51y26z3" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y26z3.c",
  "north" : DIR+"/rooms/x51y27z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
