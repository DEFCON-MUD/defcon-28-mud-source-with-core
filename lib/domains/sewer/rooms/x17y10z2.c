inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 10, 2 }));
  set_short( "Passage - x17y10z2" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y10z2.c",
  "south" : DIR+"/rooms/x17y9z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
