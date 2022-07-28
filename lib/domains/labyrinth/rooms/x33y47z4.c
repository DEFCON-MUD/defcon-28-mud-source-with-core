inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 47, 4 }));
  set_short( "Corridor - x33y47z4" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y48z4.c",
  "south" : DIR+"/rooms/x33y46z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
