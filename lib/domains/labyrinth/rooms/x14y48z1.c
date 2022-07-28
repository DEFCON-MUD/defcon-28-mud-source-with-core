inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 48, 1 }));
  set_short( "Corridor - x14y48z1" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y48z1.c",
  "east" : DIR+"/rooms/x15y48z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
