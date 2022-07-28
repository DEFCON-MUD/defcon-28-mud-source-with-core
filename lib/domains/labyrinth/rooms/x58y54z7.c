inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 54, 7 }));
  set_short( "Corridor - x58y54z7" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y54z7.c",
  "east" : DIR+"/rooms/x59y54z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
