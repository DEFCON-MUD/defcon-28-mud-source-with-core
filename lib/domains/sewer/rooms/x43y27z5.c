inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 27, 5 }));
  set_short( "Corridor - x43y27z5" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y28z5.c",
  "south" : DIR+"/rooms/x43y26z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
