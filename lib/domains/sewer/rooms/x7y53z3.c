inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 53, 3 }));
  set_short( "Passage - x7y53z3" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y54z3.c",
  "south" : DIR+"/rooms/x7y52z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
