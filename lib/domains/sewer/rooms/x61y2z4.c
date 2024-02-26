inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 4 }));
  set_short( "Passage - x61y2z4" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z4.c",
  "north" : DIR+"/rooms/x61y3z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
