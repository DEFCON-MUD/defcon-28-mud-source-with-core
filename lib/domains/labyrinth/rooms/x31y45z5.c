inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 45, 5 }));
  set_short( "Passage - x31y45z5" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y46z5.c",
  "south" : DIR+"/rooms/x31y44z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
