inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 3 }));
  set_short( "Passage - x49y16z3" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y17z3.c",
  "south" : DIR+"/rooms/x49y15z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
