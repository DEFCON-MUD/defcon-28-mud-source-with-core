inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 22, 9 }));
  set_short( "Passage - x41y22z9" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y22z9.c",
  "east" : DIR+"/rooms/x42y22z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
