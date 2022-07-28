inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 55, 3 }));
  set_short( "Passage - x47y55z3" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y56z3.c",
  "south" : DIR+"/rooms/x47y54z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
