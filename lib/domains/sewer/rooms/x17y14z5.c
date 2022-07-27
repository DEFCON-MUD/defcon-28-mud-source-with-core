inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 14, 5 }));
  set_short( "Corridor - x17y14z5" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y14z5.c",
  "north" : DIR+"/rooms/x17y15z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
