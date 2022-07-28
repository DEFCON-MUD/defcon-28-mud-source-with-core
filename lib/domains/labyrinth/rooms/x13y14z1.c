inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 14, 1 }));
  set_short( "Hallway - x13y14z1" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y14z1.c",
  "north" : DIR+"/rooms/x13y15z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
