inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 9 }));
  set_short( "Corridor - x55y42z9" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y42z9.c",
  "south" : DIR+"/rooms/x55y41z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
