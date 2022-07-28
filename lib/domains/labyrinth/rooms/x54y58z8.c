inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 58, 8 }));
  set_short( "Corridor - x54y58z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y58z8.c",
  "east" : DIR+"/rooms/x55y58z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
