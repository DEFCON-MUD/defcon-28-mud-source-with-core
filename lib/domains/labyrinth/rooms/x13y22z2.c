inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 22, 2 }));
  set_short( "Corridor - x13y22z2" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y22z2.c",
  "east" : DIR+"/rooms/x14y22z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
