inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 20, 8 }));
  set_short( "Hallway - x61y20z8" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y21z8.c",
  "south" : DIR+"/rooms/x61y19z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
