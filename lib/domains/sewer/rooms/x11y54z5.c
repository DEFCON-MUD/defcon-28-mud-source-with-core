inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 54, 5 }));
  set_short( "Corridor - x11y54z5" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y54z5.c",
  "north" : DIR+"/rooms/x11y55z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
