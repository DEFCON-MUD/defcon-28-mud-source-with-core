inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 21, 3 }));
  set_short( "Passage - x9y21z3" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y22z3.c",
  "south" : DIR+"/rooms/x9y20z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
