inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 4 }));
  set_short( "Corridor - x53y64z4" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z4.c",
  "east" : DIR+"/rooms/x54y64z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
