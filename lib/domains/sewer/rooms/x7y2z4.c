inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 2, 4 }));
  set_short( "Passage - x7y2z4" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y2z4.c",
  "east" : DIR+"/rooms/x8y2z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
