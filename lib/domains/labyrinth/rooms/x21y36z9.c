inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 36, 9 }));
  set_short( "Corridor - x21y36z9" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y37z9.c",
  "south" : DIR+"/rooms/x21y35z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
