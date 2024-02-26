inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 40, 9 }));
  set_short( "Corridor - x23y40z9" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y40z9.c",
  "north" : DIR+"/rooms/x23y41z9.c",
  "south" : DIR+"/rooms/x23y39z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
