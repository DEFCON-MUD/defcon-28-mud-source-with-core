inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 12, 4 }));
  set_short( "Passage - x1y12z4" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y12z4.c",
  "south" : DIR+"/rooms/x1y11z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
