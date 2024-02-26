inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 0, 8 }));
  set_short( "Hallway - x16y0z8" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y0z8.c",
  "east" : DIR+"/rooms/x17y0z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
