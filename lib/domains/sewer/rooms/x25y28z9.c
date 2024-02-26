inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 28, 9 }));
  set_short( "Hallway - x25y28z9" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y28z9.c",
  "south" : DIR+"/rooms/x25y27z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
