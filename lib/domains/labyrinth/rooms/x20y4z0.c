inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 4, 0 }));
  set_short( "Corridor - x20y4z0" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y4z0.c",
  "east" : DIR+"/rooms/x21y4z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
