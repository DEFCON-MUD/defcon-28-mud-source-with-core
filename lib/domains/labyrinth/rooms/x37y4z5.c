inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 4, 5 }));
  set_short( "Corridor - x37y4z5" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y4z5.c",
  "south" : DIR+"/rooms/x37y3z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
