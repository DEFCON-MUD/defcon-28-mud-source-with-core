inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 21, 7 }));
  set_short( "Hallway - x1y21z7" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y22z7.c",
  "south" : DIR+"/rooms/x1y20z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
