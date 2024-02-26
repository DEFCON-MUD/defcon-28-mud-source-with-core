inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 1 }));
  set_short( "Hallway - x35y38z1" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y38z1.c",
  "south" : DIR+"/rooms/x35y37z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
