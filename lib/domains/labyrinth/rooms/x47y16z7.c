inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 7 }));
  set_short( "Corridor - x47y16z7" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y16z7.c",
  "east" : DIR+"/rooms/x48y16z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
