inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 0 }));
  set_short( "Passage - x29y56z0" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y56z0.c",
  "east" : DIR+"/rooms/x30y56z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
