inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 28, 2 }));
  set_short( "Corridor - x47y28z2" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y28z2.c",
  "north" : DIR+"/rooms/x47y29z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
