inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 56, 1 }));
  set_short( "Corridor - x48y56z1" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y56z1.c",
  "east" : DIR+"/rooms/x49y56z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
