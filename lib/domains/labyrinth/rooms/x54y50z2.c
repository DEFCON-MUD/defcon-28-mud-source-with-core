inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 50, 2 }));
  set_short( "Corridor - x54y50z2" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y50z2.c",
  "east" : DIR+"/rooms/x55y50z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
