inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 18, 0 }));
  set_short( "Corridor - x51y18z0" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y18z0.c",
  "north" : DIR+"/rooms/x51y19z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
