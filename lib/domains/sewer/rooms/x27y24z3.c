inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 24, 3 }));
  set_short( "Passage - x27y24z3" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y24z3.c",
  "south" : DIR+"/rooms/x27y23z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
