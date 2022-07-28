inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 33, 1 }));
  set_short( "Passage - x13y33z1" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y34z1.c",
  "south" : DIR+"/rooms/x13y32z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
