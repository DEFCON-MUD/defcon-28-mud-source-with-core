inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 5 }));
  set_short( "Passage - x41y14z5" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y14z5.c",
  "north" : DIR+"/rooms/x41y15z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
