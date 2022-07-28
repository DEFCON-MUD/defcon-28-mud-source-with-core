inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 7 }));
  set_short( "Hallway - x45y44z7" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y44z7.c",
  "east" : DIR+"/rooms/x46y44z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
