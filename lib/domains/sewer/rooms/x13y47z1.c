inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 47, 1 }));
  set_short( "Passage - x13y47z1" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y48z1.c",
  "south" : DIR+"/rooms/x13y46z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
