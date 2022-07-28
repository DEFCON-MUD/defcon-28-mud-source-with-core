inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 46, 6 }));
  set_short( "Hallway - x40y46z6" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y46z6.c",
  "east" : DIR+"/rooms/x41y46z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
