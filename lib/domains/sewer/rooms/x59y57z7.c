inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 57, 7 }));
  set_short( "Passage - x59y57z7" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y58z7.c",
  "south" : DIR+"/rooms/x59y56z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
