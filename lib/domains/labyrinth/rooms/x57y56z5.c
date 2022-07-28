inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 56, 5 }));
  set_short( "Corridor - x57y56z5" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y56z5.c",
  "north" : DIR+"/rooms/x57y57z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
