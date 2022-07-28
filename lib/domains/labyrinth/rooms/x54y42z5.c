inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 42, 5 }));
  set_short( "Passage - x54y42z5" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y42z5.c",
  "east" : DIR+"/rooms/x55y42z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
