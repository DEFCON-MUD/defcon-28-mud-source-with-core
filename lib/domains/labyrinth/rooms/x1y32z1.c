inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 32, 1 }));
  set_short( "Hallway - x1y32z1" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y33z1.c",
  "south" : DIR+"/rooms/x1y31z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
