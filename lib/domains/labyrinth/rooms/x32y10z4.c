inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 10, 4 }));
  set_short( "Passage - x32y10z4" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y10z4.c",
  "east" : DIR+"/rooms/x33y10z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
