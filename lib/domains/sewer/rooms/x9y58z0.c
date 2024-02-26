inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 58, 0 }));
  set_short( "Corridor - x9y58z0" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y58z0.c",
  "north" : DIR+"/rooms/x9y59z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
