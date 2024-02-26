inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 7 }));
  set_short( "Hallway - x7y44z7" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y45z7.c",
  "south" : DIR+"/rooms/x7y43z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
