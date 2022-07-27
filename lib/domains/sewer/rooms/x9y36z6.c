inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 36, 6 }));
  set_short( "Hallway - x9y36z6" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y36z6.c",
  "south" : DIR+"/rooms/x9y35z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
