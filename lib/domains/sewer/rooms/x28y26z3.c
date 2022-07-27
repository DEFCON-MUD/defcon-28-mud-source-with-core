inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 26, 3 }));
  set_short( "Hallway - x28y26z3" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y26z3.c",
  "east" : DIR+"/rooms/x29y26z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
