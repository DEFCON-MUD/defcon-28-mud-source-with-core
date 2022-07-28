inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 25, 1 }));
  set_short( "Hallway - x3y25z1" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y26z1.c",
  "south" : DIR+"/rooms/x3y24z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
