inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 52, 9 }));
  set_short( "Passage - x51y52z9" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y53z9.c",
  "south" : DIR+"/rooms/x51y51z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
