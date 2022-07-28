inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 12, 4 }));
  set_short( "Corridor - x37y12z4" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y12z4.c",
  "east" : DIR+"/rooms/x38y12z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
