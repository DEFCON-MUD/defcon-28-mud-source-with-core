inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 0, 0 }));
  set_short( "Passage - x37y0z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y0z0.c",
  "east" : DIR+"/rooms/x38y0z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
