inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 6 }));
  set_short( "Passage - x3y16z6" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y16z6.c",
  "south" : DIR+"/rooms/x3y15z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
