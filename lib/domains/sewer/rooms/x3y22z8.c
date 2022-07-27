inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 8 }));
  set_short( "Passage - x3y22z8" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y23z8.c",
  "south" : DIR+"/rooms/x3y21z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
