inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 0 }));
  set_short( "Corridor - x47y16z0" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y16z0.c",
  "north" : DIR+"/rooms/x47y17z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
