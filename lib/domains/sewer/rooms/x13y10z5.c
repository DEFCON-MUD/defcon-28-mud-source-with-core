inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 10, 5 }));
  set_short( "Passage - x13y10z5" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y11z5.c",
  "south" : DIR+"/rooms/x13y9z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
