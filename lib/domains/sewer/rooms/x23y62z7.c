inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 62, 7 }));
  set_short( "Hallway - x23y62z7" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y62z7.c",
  "east" : DIR+"/rooms/x24y62z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
