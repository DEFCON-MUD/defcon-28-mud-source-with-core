inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 2, 1 }));
  set_short( "Passage - x56y2z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y2z1.c",
  "east" : DIR+"/rooms/x57y2z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
