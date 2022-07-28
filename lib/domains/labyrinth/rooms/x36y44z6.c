inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 44, 6 }));
  set_short( "Passage - x36y44z6" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y44z6.c",
  "east" : DIR+"/rooms/x37y44z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
