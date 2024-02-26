inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 8 }));
  set_short( "Hallway - x47y62z8" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y62z8.c",
  "east" : DIR+"/rooms/x48y62z8.c",
  "south" : DIR+"/rooms/x47y61z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
