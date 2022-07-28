inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 58, 0 }));
  set_short( "Passage - x4y58z0" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y58z0.c",
  "east" : DIR+"/rooms/x5y58z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
