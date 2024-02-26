inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 32, 4 }));
  set_short( "Hallway - x21y32z4" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y32z4.c",
  "east" : DIR+"/rooms/x22y32z4.c",
  "north" : DIR+"/rooms/x21y33z4.c",
  "south" : DIR+"/rooms/x21y31z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
