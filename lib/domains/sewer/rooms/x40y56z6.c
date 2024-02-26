inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 56, 6 }));
  set_short( "Hallway - x40y56z6" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y56z6.c",
  "east" : DIR+"/rooms/x41y56z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
