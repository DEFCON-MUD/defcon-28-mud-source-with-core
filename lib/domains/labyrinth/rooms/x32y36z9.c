inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 36, 9 }));
  set_short( "Corridor - x32y36z9" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y36z9.c",
  "east" : DIR+"/rooms/x33y36z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
