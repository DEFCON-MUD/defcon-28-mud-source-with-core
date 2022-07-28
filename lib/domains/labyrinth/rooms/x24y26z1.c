inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 26, 1 }));
  set_short( "Hallway - x24y26z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y26z1.c",
  "east" : DIR+"/rooms/x25y26z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
