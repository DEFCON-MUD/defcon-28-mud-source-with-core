inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 33, 3 }));
  set_short( "Passage - x23y33z3" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y34z3.c",
  "south" : DIR+"/rooms/x23y32z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
