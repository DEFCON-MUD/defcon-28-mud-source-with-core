inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 2, 3 }));
  set_short( "Corridor - x37y2z3" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y2z3.c",
  "east" : DIR+"/rooms/x38y2z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
