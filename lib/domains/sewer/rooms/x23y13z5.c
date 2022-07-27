inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 13, 5 }));
  set_short( "Passage - x23y13z5" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y14z5.c",
  "south" : DIR+"/rooms/x23y12z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
