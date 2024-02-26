inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 34, 4 }));
  set_short( "Hallway - x49y34z4" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y34z4.c",
  "north" : DIR+"/rooms/x49y35z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
