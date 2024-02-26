inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 7 }));
  set_short( "Passage - x35y38z7" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y38z7.c",
  "east" : DIR+"/rooms/x36y38z7.c",
  "north" : DIR+"/rooms/x35y39z7.c",
  "south" : DIR+"/rooms/x35y37z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
