inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 58, 0 }));
  set_short( "Passage - x36y58z0" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y58z0.c",
  "east" : DIR+"/rooms/x37y58z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
