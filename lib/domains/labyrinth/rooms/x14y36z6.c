inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 36, 6 }));
  set_short( "Corridor - x14y36z6" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y36z6.c",
  "east" : DIR+"/rooms/x15y36z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
