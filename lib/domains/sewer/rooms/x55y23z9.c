inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 23, 9 }));
  set_short( "Passage - x55y23z9" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y24z9.c",
  "south" : DIR+"/rooms/x55y22z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
