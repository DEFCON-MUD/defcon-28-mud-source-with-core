inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 25, 7 }));
  set_short( "Passage - x9y25z7" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y26z7.c",
  "south" : DIR+"/rooms/x9y24z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
