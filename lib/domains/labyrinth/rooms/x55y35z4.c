inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 35, 4 }));
  set_short( "Hallway - x55y35z4" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y36z4.c",
  "south" : DIR+"/rooms/x55y34z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
