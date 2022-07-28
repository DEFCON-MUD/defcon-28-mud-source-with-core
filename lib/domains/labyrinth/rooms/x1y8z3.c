inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 8, 3 }));
  set_short( "Passage - x1y8z3" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y9z3.c",
  "south" : DIR+"/rooms/x1y7z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
