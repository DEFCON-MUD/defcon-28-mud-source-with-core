inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 1 }));
  set_short( "Hallway - x7y58z1" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y58z1.c",
  "south" : DIR+"/rooms/x7y57z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
