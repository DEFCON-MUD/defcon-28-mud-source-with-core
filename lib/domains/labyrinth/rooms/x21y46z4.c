inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 46, 4 }));
  set_short( "Hallway - x21y46z4" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y46z4.c",
  "north" : DIR+"/rooms/x21y47z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
