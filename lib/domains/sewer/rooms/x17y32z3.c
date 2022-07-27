inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 3 }));
  set_short( "Passage - x17y32z3" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y32z3.c",
  "north" : DIR+"/rooms/x17y33z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
