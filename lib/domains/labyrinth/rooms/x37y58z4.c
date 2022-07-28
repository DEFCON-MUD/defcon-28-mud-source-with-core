inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 58, 4 }));
  set_short( "Hallway - x37y58z4" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y58z4.c",
  "north" : DIR+"/rooms/x37y59z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
