inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 0, 8 }));
  set_short( "Hallway - x10y0z8" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y0z8.c",
  "east" : DIR+"/rooms/x11y0z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
