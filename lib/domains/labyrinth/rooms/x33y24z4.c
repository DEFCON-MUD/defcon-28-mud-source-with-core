inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 24, 4 }));
  set_short( "Corridor - x33y24z4" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y25z4.c",
  "south" : DIR+"/rooms/x33y23z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
