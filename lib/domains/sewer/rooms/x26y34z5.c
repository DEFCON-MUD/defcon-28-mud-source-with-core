inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 34, 5 }));
  set_short( "Corridor - x26y34z5" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y34z5.c",
  "east" : DIR+"/rooms/x27y34z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
