inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 46, 1 }));
  set_short( "Hallway - x39y46z1" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y46z1.c",
  "north" : DIR+"/rooms/x39y47z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
