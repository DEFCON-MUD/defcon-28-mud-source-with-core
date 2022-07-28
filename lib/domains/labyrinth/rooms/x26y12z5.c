inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 12, 5 }));
  set_short( "Corridor - x26y12z5" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y12z5.c",
  "east" : DIR+"/rooms/x27y12z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
