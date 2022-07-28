inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 36, 1 }));
  set_short( "Corridor - x27y36z1" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y36z1.c",
  "south" : DIR+"/rooms/x27y35z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
