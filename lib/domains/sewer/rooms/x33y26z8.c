inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 8 }));
  set_short( "Passage - x33y26z8" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y26z8.c",
  "north" : DIR+"/rooms/x33y27z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
