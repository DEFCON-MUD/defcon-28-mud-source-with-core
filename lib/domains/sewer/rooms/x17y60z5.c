inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 60, 5 }));
  set_short( "Passage - x17y60z5" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y60z5.c",
  "east" : DIR+"/rooms/x18y60z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
