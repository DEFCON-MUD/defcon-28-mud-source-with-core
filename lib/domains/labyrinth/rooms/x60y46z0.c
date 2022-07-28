inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 46, 0 }));
  set_short( "Corridor - x60y46z0" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y46z0.c",
  "east" : DIR+"/rooms/x61y46z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
