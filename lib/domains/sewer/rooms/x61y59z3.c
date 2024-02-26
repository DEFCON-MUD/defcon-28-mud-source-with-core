inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 59, 3 }));
  set_short( "Hallway - x61y59z3" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y60z3.c",
  "south" : DIR+"/rooms/x61y58z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
