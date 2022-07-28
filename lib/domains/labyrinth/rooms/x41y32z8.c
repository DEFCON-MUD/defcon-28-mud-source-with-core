inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 32, 8 }));
  set_short( "Corridor - x41y32z8" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y32z8.c",
  "east" : DIR+"/rooms/x42y32z8.c",
  "south" : DIR+"/rooms/x41y31z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
