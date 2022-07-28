inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 39, 0 }));
  set_short( "Hallway - x21y39z0" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y40z0.c",
  "south" : DIR+"/rooms/x21y38z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
