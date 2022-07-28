inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 31, 7 }));
  set_short( "Hallway - x19y31z7" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y32z7.c",
  "south" : DIR+"/rooms/x19y30z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
