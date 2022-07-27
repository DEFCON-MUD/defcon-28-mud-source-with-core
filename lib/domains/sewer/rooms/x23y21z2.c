inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 21, 2 }));
  set_short( "Passage - x23y21z2" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y22z2.c",
  "south" : DIR+"/rooms/x23y20z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
