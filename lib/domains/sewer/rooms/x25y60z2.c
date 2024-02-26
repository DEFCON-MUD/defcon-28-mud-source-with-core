inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 60, 2 }));
  set_short( "Corridor - x25y60z2" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y60z2.c",
  "south" : DIR+"/rooms/x25y59z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
