inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 45, 9 }));
  set_short( "Corridor - x7y45z9" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y46z9.c",
  "south" : DIR+"/rooms/x7y44z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
