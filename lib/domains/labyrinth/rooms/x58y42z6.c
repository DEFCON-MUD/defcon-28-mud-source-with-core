inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 42, 6 }));
  set_short( "Hallway - x58y42z6" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y42z6.c",
  "east" : DIR+"/rooms/x59y42z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
