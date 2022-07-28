inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 55, 7 }));
  set_short( "Corridor - x39y55z7" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y56z7.c",
  "south" : DIR+"/rooms/x39y54z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
