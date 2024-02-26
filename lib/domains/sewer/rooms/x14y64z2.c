inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 64, 2 }));
  set_short( "Hallway - x14y64z2" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y64z2.c",
  "east" : DIR+"/rooms/x15y64z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
