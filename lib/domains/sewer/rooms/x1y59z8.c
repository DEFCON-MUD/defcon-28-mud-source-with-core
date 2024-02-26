inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 59, 8 }));
  set_short( "Hallway - x1y59z8" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y60z8.c",
  "south" : DIR+"/rooms/x1y58z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
