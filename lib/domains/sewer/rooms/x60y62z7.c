inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 62, 7 }));
  set_short( "Hallway - x60y62z7" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y62z7.c",
  "east" : DIR+"/rooms/x61y62z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
