inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 12, 1 }));
  set_short( "Passage - x19y12z1" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y12z1.c",
  "east" : DIR+"/rooms/x20y12z1.c",
  "north" : DIR+"/rooms/x19y13z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
