inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 42, 9 }));
  set_short( "Corridor - x11y42z9" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y42z9.c",
  "north" : DIR+"/rooms/x11y43z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
