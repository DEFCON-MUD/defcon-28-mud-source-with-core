inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 56, 1 }));
  set_short( "Hallway - x61y56z1" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y56z1.c",
  "north" : DIR+"/rooms/x61y57z1.c",
  "south" : DIR+"/rooms/x61y55z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
