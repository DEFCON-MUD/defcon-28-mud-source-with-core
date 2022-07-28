inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 54, 7 }));
  set_short( "Corridor - x1y54z7" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y55z7.c",
  "south" : DIR+"/rooms/x1y53z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
