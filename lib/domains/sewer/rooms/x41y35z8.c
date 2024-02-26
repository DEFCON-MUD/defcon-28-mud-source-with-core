inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 35, 8 }));
  set_short( "Hallway - x41y35z8" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y36z8.c",
  "south" : DIR+"/rooms/x41y34z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
