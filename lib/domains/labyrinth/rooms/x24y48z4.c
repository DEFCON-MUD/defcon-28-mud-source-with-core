inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 48, 4 }));
  set_short( "Hallway - x24y48z4" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y48z4.c",
  "east" : DIR+"/rooms/x25y48z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
