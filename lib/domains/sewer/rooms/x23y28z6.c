inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 28, 6 }));
  set_short( "Passage - x23y28z6" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y29z6.c",
  "south" : DIR+"/rooms/x23y27z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
