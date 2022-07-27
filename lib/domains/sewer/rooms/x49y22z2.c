inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 22, 2 }));
  set_short( "Passage - x49y22z2" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y22z2.c",
  "north" : DIR+"/rooms/x49y23z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
