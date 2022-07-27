inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 12, 8 }));
  set_short( "Hallway - x49y12z8" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y12z8.c",
  "south" : DIR+"/rooms/x49y11z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
