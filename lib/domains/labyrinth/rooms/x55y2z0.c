inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 2, 0 }));
  set_short( "Passage - x55y2z0" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y2z0.c",
  "north" : DIR+"/rooms/x55y3z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
