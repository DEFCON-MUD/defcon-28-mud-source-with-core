inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 2, 0 }));
  set_short( "Corridor - x5y2z0" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y2z0.c",
  "east" : DIR+"/rooms/x6y2z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
