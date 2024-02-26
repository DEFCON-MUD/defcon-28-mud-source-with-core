inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 42, 4 }));
  set_short( "Hallway - x2y42z4" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y42z4.c",
  "east" : DIR+"/rooms/x3y42z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
