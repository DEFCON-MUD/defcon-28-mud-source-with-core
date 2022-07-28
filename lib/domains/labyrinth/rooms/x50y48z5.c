inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 48, 5 }));
  set_short( "Corridor - x50y48z5" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y48z5.c",
  "east" : DIR+"/rooms/x51y48z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
