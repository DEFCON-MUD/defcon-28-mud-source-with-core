inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 42, 7 }));
  set_short( "Corridor - x27y42z7" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y42z7.c",
  "north" : DIR+"/rooms/x27y43z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
