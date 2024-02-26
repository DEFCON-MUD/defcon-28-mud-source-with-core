inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 4, 1 }));
  set_short( "Hallway - x60y4z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y4z1.c",
  "east" : DIR+"/rooms/x61y4z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
