inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 8 }));
  set_short( "Hallway - x27y34z8" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y34z8.c",
  "east" : DIR+"/rooms/x28y34z8.c",
  "north" : DIR+"/rooms/x27y35z8.c",
  "south" : DIR+"/rooms/x27y33z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
