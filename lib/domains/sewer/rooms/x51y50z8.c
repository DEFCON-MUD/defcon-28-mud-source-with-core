inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 50, 8 }));
  set_short( "Passage - x51y50z8" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y51z8.c",
  "south" : DIR+"/rooms/x51y49z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
