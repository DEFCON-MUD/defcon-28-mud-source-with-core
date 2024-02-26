inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 8, 9 }));
  set_short( "Corridor - x49y8z9" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y8z9.c",
  "north" : DIR+"/rooms/x49y9z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
