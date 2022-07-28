inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 38, 9 }));
  set_short( "Corridor - x33y38z9" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y38z9.c",
  "east" : DIR+"/rooms/x34y38z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
