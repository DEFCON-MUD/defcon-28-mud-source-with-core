inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 56, 0 }));
  set_short( "Corridor - x42y56z0" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y56z0.c",
  "east" : DIR+"/rooms/x43y56z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
