inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 12, 5 }));
  set_short( "Hallway - x16y12z5" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y12z5.c",
  "east" : DIR+"/rooms/x17y12z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
