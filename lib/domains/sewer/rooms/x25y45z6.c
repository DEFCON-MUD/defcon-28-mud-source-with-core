inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 45, 6 }));
  set_short( "Passage - x25y45z6" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y46z6.c",
  "south" : DIR+"/rooms/x25y44z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
