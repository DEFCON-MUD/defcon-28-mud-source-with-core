inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 50, 5 }));
  set_short( "Hallway - x29y50z5" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y50z5.c",
  "north" : DIR+"/rooms/x29y51z5.c",
  "south" : DIR+"/rooms/x29y49z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
