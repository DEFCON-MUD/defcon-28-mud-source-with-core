inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 60, 5 }));
  set_short( "Corridor - x40y60z5" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y60z5.c",
  "east" : DIR+"/rooms/x41y60z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
