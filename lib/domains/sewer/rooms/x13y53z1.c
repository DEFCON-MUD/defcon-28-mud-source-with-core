inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 53, 1 }));
  set_short( "Hallway - x13y53z1" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y54z1.c",
  "south" : DIR+"/rooms/x13y52z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
