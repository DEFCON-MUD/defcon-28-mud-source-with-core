inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 37, 5 }));
  set_short( "Hallway - x35y37z5" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y38z5.c",
  "south" : DIR+"/rooms/x35y36z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
