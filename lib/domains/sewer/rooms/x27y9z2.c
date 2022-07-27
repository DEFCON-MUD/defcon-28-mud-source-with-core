inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 9, 2 }));
  set_short( "Hallway - x27y9z2" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y10z2.c",
  "south" : DIR+"/rooms/x27y8z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
