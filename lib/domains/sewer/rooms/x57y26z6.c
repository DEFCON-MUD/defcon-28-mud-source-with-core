inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 26, 6 }));
  set_short( "Hallway - x57y26z6" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y26z6.c",
  "east" : DIR+"/rooms/x58y26z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
