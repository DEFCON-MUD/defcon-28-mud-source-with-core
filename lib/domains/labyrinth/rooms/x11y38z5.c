inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 5 }));
  set_short( "Hallway - x11y38z5" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "south" : DIR+"/rooms/x11y37z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
