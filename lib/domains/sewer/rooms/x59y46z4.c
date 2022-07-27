inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 46, 4 }));
  set_short( "Passage - x59y46z4" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y47z4.c",
  "south" : DIR+"/rooms/x59y45z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
