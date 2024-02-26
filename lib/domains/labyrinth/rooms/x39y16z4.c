inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 16, 4 }));
  set_short( "Passage - x39y16z4" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y16z4.c",
  "east" : DIR+"/rooms/x40y16z4.c",
  "north" : DIR+"/rooms/x39y17z4.c",
  "south" : DIR+"/rooms/x39y15z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
