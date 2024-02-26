inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 40, 8 }));
  set_short( "Hallway - x33y40z8" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y40z8.c",
  "east" : DIR+"/rooms/x34y40z8.c",
  "south" : DIR+"/rooms/x33y39z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
