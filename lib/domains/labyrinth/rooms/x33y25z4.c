inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 25, 4 }));
  set_short( "Hallway - x33y25z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y26z4.c",
  "south" : DIR+"/rooms/x33y24z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
