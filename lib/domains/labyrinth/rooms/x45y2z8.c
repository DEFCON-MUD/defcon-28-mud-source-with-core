inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 2, 8 }));
  set_short( "Corridor - x45y2z8" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y2z8.c",
  "east" : DIR+"/rooms/x46y2z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
