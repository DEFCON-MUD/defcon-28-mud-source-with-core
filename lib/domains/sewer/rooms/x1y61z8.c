inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 8 }));
  set_short( "Corridor - x1y61z8" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z8.c",
  "south" : DIR+"/rooms/x1y60z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
