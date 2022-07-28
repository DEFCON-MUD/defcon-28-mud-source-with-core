inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 40, 5 }));
  set_short( "Corridor - x12y40z5" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y40z5.c",
  "east" : DIR+"/rooms/x13y40z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
