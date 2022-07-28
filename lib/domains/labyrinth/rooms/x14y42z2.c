inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 42, 2 }));
  set_short( "Corridor - x14y42z2" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y42z2.c",
  "east" : DIR+"/rooms/x15y42z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
