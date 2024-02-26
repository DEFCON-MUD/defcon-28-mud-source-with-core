inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 25, 1 }));
  set_short( "Hallway - x21y25z1" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y26z1.c",
  "south" : DIR+"/rooms/x21y24z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
