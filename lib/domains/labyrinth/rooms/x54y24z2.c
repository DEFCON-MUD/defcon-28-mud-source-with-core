inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 24, 2 }));
  set_short( "Passage - x54y24z2" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y24z2.c",
  "east" : DIR+"/rooms/x55y24z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
