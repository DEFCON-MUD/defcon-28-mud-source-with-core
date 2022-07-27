inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 30, 0 }));
  set_short( "Passage - x31y30z0" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y30z0.c",
  "north" : DIR+"/rooms/x31y31z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
