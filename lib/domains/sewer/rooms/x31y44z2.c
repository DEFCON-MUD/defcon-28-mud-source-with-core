inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 44, 2 }));
  set_short( "Passage - x31y44z2" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y44z2.c",
  "south" : DIR+"/rooms/x31y43z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
