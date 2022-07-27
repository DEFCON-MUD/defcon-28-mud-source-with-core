inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 16, 9 }));
  set_short( "Hallway - x7y16z9" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y16z9.c",
  "south" : DIR+"/rooms/x7y15z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
