inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 39, 2 }));
  set_short( "Corridor - x37y39z2" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y40z2.c",
  "south" : DIR+"/rooms/x37y38z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
