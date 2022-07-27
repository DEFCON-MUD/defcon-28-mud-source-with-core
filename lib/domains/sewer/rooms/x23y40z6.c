inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 40, 6 }));
  set_short( "Passage - x23y40z6" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y40z6.c",
  "south" : DIR+"/rooms/x23y39z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
