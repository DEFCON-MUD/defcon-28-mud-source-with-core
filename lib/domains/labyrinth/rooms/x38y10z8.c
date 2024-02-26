inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 10, 8 }));
  set_short( "Corridor - x38y10z8" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y10z8.c",
  "east" : DIR+"/rooms/x39y10z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
