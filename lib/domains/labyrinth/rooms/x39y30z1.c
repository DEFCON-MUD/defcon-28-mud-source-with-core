inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 30, 1 }));
  set_short( "Corridor - x39y30z1" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y30z1.c",
  "east" : DIR+"/rooms/x40y30z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
