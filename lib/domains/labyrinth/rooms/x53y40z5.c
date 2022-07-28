inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 40, 5 }));
  set_short( "Passage - x53y40z5" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y40z5.c",
  "east" : DIR+"/rooms/x54y40z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
