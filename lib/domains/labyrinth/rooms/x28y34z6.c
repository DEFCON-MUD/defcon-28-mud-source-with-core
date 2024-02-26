inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 34, 6 }));
  set_short( "Corridor - x28y34z6" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y34z6.c",
  "east" : DIR+"/rooms/x29y34z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
