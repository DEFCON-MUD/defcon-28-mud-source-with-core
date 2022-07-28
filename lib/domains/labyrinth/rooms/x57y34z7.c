inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 34, 7 }));
  set_short( "Corridor - x57y34z7" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y34z7.c",
  "east" : DIR+"/rooms/x58y34z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
