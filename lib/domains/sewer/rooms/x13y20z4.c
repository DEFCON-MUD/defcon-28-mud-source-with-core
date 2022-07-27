inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 20, 4 }));
  set_short( "Hallway - x13y20z4" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y21z4.c",
  "south" : DIR+"/rooms/x13y19z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
