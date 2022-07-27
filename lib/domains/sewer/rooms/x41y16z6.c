inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 16, 6 }));
  set_short( "Hallway - x41y16z6" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y17z6.c",
  "south" : DIR+"/rooms/x41y15z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
