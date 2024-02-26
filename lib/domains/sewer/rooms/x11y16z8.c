inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 16, 8 }));
  set_short( "Hallway - x11y16z8" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y16z8.c",
  "north" : DIR+"/rooms/x11y17z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
