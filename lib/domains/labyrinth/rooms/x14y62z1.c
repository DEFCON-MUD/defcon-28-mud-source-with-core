inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 62, 1 }));
  set_short( "Passage - x14y62z1" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y62z1.c",
  "east" : DIR+"/rooms/x15y62z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
