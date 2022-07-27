inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 35, 0 }));
  set_short( "Passage - x21y35z0" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y36z0.c",
  "south" : DIR+"/rooms/x21y34z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
