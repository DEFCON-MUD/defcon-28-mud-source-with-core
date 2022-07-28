inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 22, 4 }));
  set_short( "Passage - x1y22z4" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y22z4.c",
  "south" : DIR+"/rooms/x1y21z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
