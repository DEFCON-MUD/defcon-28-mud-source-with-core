inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 54, 9 }));
  set_short( "Corridor - x12y54z9" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y54z9.c",
  "east" : DIR+"/rooms/x13y54z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
