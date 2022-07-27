inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 14, 4 }));
  set_short( "Passage - x13y14z4" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y14z4.c",
  "north" : DIR+"/rooms/x13y15z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
