inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 30, 8 }));
  set_short( "Hallway - x24y30z8" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y30z8.c",
  "east" : DIR+"/rooms/x25y30z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
