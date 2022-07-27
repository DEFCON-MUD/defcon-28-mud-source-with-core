inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 56, 1 }));
  set_short( "Passage - x51y56z1" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y57z1.c",
  "south" : DIR+"/rooms/x51y55z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
