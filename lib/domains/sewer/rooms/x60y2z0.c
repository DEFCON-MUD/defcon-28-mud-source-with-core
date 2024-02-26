inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 2, 0 }));
  set_short( "Hallway - x60y2z0" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y2z0.c",
  "east" : DIR+"/rooms/x61y2z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
