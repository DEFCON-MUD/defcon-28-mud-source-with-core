inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 3, 5 }));
  set_short( "Corridor - x39y3z5" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y4z5.c",
  "south" : DIR+"/rooms/x39y2z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
