inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 40, 3 }));
  set_short( "Hallway - x55y40z3" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y40z3.c",
  "south" : DIR+"/rooms/x55y39z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
