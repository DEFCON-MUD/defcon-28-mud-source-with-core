inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 64, 4 }));
  set_short( "Hallway - x57y64z4" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y64z4.c",
  "east" : DIR+"/rooms/x58y64z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
