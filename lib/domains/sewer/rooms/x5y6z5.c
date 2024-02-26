inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 5 }));
  set_short( "Hallway - x5y6z5" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y6z5.c",
  "north" : DIR+"/rooms/x5y7z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
