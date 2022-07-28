inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 12, 7 }));
  set_short( "Corridor - x10y12z7" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y12z7.c",
  "east" : DIR+"/rooms/x11y12z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
