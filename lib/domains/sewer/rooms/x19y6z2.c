inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 6, 2 }));
  set_short( "Hallway - x19y6z2" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y7z2.c",
  "south" : DIR+"/rooms/x19y5z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
