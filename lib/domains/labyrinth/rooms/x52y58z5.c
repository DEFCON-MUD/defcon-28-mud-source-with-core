inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 58, 5 }));
  set_short( "Hallway - x52y58z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y58z5.c",
  "east" : DIR+"/rooms/x53y58z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
