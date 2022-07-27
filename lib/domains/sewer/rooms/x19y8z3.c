inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 8, 3 }));
  set_short( "Passage - x19y8z3" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y9z3.c",
  "south" : DIR+"/rooms/x19y7z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
