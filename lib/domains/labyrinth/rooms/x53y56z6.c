inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 6 }));
  set_short( "Corridor - x53y56z6" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y56z6.c",
  "east" : DIR+"/rooms/x54y56z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
