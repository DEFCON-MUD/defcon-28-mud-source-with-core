inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 10, 3 }));
  set_short( "Corridor - x46y10z3" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y10z3.c",
  "east" : DIR+"/rooms/x47y10z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
