inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 22, 1 }));
  set_short( "Hallway - x27y22z1" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y22z1.c",
  "south" : DIR+"/rooms/x27y21z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
