inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 57, 1 }));
  set_short( "Corridor - x29y57z1" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y58z1.c",
  "south" : DIR+"/rooms/x29y56z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
