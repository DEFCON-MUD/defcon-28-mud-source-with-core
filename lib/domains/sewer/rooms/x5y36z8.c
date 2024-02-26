inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 36, 8 }));
  set_short( "Corridor - x5y36z8" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y36z8.c",
  "east" : DIR+"/rooms/x6y36z8.c",
  "north" : DIR+"/rooms/x5y37z8.c",
  "south" : DIR+"/rooms/x5y35z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
