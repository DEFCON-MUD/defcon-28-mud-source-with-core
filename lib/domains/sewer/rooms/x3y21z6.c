inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 21, 6 }));
  set_short( "Passage - x3y21z6" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y22z6.c",
  "south" : DIR+"/rooms/x3y20z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
