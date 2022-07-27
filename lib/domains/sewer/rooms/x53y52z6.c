inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 52, 6 }));
  set_short( "Passage - x53y52z6" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y52z6.c",
  "east" : DIR+"/rooms/x54y52z6.c",
  "north" : DIR+"/rooms/x53y53z6.c",
  "south" : DIR+"/rooms/x53y51z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
