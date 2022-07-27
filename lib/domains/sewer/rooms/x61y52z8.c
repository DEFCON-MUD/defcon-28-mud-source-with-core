inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 8 }));
  set_short( "Passage - x61y52z8" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z8.c",
  "south" : DIR+"/rooms/x61y51z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
