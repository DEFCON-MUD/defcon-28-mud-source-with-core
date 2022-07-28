inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 44, 4 }));
  set_short( "Corridor - x10y44z4" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y44z4.c",
  "east" : DIR+"/rooms/x11y44z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
