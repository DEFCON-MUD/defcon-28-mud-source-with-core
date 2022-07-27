inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 59, 6 }));
  set_short( "Passage - x41y59z6" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y60z6.c",
  "south" : DIR+"/rooms/x41y58z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
