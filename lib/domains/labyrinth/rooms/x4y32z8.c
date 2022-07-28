inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 32, 8 }));
  set_short( "Passage - x4y32z8" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y32z8.c",
  "east" : DIR+"/rooms/x5y32z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
