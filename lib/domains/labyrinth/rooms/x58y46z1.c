inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 46, 1 }));
  set_short( "Corridor - x58y46z1" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y46z1.c",
  "east" : DIR+"/rooms/x59y46z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
