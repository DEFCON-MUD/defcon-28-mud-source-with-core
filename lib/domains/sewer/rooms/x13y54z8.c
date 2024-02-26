inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 54, 8 }));
  set_short( "Hallway - x13y54z8" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y54z8.c",
  "east" : DIR+"/rooms/x14y54z8.c",
  "south" : DIR+"/rooms/x13y53z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
