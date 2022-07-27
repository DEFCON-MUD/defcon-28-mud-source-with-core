inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 15, 5 }));
  set_short( "Corridor - x29y15z5" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y16z5.c",
  "south" : DIR+"/rooms/x29y14z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
