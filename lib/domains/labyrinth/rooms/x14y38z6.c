inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 38, 6 }));
  set_short( "Corridor - x14y38z6" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y38z6.c",
  "east" : DIR+"/rooms/x15y38z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
