inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 30, 6 }));
  set_short( "Corridor - x49y30z6" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y30z6.c",
  "south" : DIR+"/rooms/x49y29z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
