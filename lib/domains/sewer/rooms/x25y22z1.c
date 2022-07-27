inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 22, 1 }));
  set_short( "Passage - x25y22z1" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y22z1.c",
  "east" : DIR+"/rooms/x26y22z1.c",
  "north" : DIR+"/rooms/x25y23z1.c",
  "south" : DIR+"/rooms/x25y21z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
