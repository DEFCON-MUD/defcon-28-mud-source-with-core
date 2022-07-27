inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 36, 4 }));
  set_short( "Passage - x21y36z4" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y36z4.c",
  "north" : DIR+"/rooms/x21y37z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
