inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 16, 5 }));
  set_short( "Hallway - x57y16z5" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y16z5.c",
  "north" : DIR+"/rooms/x57y17z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
