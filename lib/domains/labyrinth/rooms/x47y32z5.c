inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 32, 5 }));
  set_short( "Corridor - x47y32z5" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y33z5.c",
  "south" : DIR+"/rooms/x47y31z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
