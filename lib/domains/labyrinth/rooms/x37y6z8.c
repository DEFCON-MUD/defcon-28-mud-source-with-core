inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 6, 8 }));
  set_short( "Passage - x37y6z8" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y6z8.c",
  "north" : DIR+"/rooms/x37y7z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
