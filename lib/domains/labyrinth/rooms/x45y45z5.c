inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 45, 5 }));
  set_short( "Passage - x45y45z5" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y46z5.c",
  "south" : DIR+"/rooms/x45y44z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
