inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 8 }));
  set_short( "Hallway - x27y20z8" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y20z8.c",
  "north" : DIR+"/rooms/x27y21z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
