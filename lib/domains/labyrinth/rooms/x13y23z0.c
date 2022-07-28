inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 23, 0 }));
  set_short( "Hallway - x13y23z0" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y24z0.c",
  "south" : DIR+"/rooms/x13y22z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
