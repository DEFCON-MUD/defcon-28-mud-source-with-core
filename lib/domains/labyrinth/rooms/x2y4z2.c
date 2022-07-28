inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 4, 2 }));
  set_short( "Hallway - x2y4z2" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y4z2.c",
  "east" : DIR+"/rooms/x3y4z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
