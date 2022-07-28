inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 62, 5 }));
  set_short( "Corridor - x59y62z5" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y62z5.c",
  "south" : DIR+"/rooms/x59y61z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
