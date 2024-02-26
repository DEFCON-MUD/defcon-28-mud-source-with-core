inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 36, 4 }));
  set_short( "Passage - x31y36z4" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y36z4.c",
  "south" : DIR+"/rooms/x31y35z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
