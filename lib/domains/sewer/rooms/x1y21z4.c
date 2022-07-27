inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 21, 4 }));
  set_short( "Passage - x1y21z4" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y22z4.c",
  "south" : DIR+"/rooms/x1y20z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
