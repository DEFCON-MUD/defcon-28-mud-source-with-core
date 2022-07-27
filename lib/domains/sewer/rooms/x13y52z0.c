inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 52, 0 }));
  set_short( "Passage - x13y52z0" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y53z0.c",
  "south" : DIR+"/rooms/x13y51z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
