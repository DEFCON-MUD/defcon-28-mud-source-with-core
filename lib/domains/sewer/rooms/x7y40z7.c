inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 40, 7 }));
  set_short( "Hallway - x7y40z7" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y40z7.c",
  "south" : DIR+"/rooms/x7y39z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
