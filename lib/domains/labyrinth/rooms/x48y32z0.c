inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 32, 0 }));
  set_short( "Passage - x48y32z0" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y32z0.c",
  "east" : DIR+"/rooms/x49y32z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
