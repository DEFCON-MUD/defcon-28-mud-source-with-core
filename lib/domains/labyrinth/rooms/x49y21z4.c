inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 21, 4 }));
  set_short( "Corridor - x49y21z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y22z4.c",
  "south" : DIR+"/rooms/x49y20z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
