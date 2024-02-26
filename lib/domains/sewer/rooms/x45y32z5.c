inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 32, 5 }));
  set_short( "Passage - x45y32z5" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y32z5.c",
  "north" : DIR+"/rooms/x45y33z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
