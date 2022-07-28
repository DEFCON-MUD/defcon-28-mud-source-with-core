inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 18, 9 }));
  set_short( "Corridor - x27y18z9" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y18z9.c",
  "south" : DIR+"/rooms/x27y17z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
