inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 39, 0 }));
  set_short( "Corridor - x25y39z0" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y40z0.c",
  "south" : DIR+"/rooms/x25y38z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
