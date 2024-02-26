inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 64, 5 }));
  set_short( "Corridor - x40y64z5" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y64z5.c",
  "east" : DIR+"/rooms/x41y64z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
