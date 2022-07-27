inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 35, 6 }));
  set_short( "Passage - x39y35z6" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y36z6.c",
  "south" : DIR+"/rooms/x39y34z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
