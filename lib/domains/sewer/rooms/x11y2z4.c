inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 2, 4 }));
  set_short( "Passage - x11y2z4" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y2z4.c",
  "east" : DIR+"/rooms/x12y2z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
