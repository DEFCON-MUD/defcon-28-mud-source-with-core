inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 37, 6 }));
  set_short( "Corridor - x39y37z6" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y38z6.c",
  "south" : DIR+"/rooms/x39y36z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
