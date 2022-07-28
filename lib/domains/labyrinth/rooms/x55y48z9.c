inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 48, 9 }));
  set_short( "Corridor - x55y48z9" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y48z9.c",
  "north" : DIR+"/rooms/x55y49z9.c",
  "south" : DIR+"/rooms/x55y47z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
