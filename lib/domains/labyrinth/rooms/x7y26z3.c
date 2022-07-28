inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 26, 3 }));
  set_short( "Passage - x7y26z3" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y26z3.c",
  "south" : DIR+"/rooms/x7y25z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
