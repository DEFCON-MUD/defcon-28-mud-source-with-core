inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 2, 4 }));
  set_short( "Hallway - x12y2z4" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y2z4.c",
  "east" : DIR+"/rooms/x13y2z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
