inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 4, 8 }));
  set_short( "Passage - x50y4z8" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y4z8.c",
  "east" : DIR+"/rooms/x51y4z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
