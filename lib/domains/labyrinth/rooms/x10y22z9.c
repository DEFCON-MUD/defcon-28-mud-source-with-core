inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 22, 9 }));
  set_short( "Corridor - x10y22z9" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y22z9.c",
  "east" : DIR+"/rooms/x11y22z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
