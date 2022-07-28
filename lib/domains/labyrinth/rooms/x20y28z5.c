inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 28, 5 }));
  set_short( "Hallway - x20y28z5" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y28z5.c",
  "east" : DIR+"/rooms/x21y28z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
