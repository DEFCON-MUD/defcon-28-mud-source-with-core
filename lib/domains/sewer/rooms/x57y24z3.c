inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 24, 3 }));
  set_short( "Hallway - x57y24z3" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y24z3.c",
  "east" : DIR+"/rooms/x58y24z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
