inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 58, 9 }));
  set_short( "Hallway - x41y58z9" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y58z9.c",
  "north" : DIR+"/rooms/x41y59z9.c",
  "south" : DIR+"/rooms/x41y57z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
