inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 50, 7 }));
  set_short( "Corridor - x11y50z7" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y50z7.c",
  "north" : DIR+"/rooms/x11y51z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
