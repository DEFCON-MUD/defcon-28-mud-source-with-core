inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 22, 0 }));
  set_short( "Hallway - x12y22z0" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y22z0.c",
  "east" : DIR+"/rooms/x13y22z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
