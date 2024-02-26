inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 4, 7 }));
  set_short( "Corridor - x50y4z7" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y4z7.c",
  "east" : DIR+"/rooms/x51y4z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
