inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 9 }));
  set_short( "Passage - x43y50z9" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y50z9.c",
  "north" : DIR+"/rooms/x43y51z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
