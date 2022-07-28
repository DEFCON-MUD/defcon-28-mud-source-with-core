inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 36, 5 }));
  set_short( "Passage - x14y36z5" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y36z5.c",
  "east" : DIR+"/rooms/x15y36z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
