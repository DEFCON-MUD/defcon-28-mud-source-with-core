inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 22, 4 }));
  set_short( "Hallway - x27y22z4" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y23z4.c",
  "south" : DIR+"/rooms/x27y21z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
