inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 9 }));
  set_short( "Hallway - x15y6z9" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y6z9.c",
  "north" : DIR+"/rooms/x15y7z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
