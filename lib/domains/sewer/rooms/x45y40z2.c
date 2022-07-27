inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 2 }));
  set_short( "Corridor - x45y40z2" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y40z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
