inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 26, 7 }));
  set_short( "Passage - x35y26z7" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y26z7.c",
  "north" : DIR+"/rooms/x35y27z7.c",
  "south" : DIR+"/rooms/x35y25z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
