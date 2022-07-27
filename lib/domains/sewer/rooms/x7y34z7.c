inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 34, 7 }));
  set_short( "Hallway - x7y34z7" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y34z7.c",
  "south" : DIR+"/rooms/x7y33z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
