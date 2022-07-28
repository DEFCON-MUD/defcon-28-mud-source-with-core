inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 9 }));
  set_short( "Hallway - x55y6z9" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z9.c",
  "east" : DIR+"/rooms/x56y6z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
