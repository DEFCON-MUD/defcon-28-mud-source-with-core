inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 2, 3 }));
  set_short( "Hallway - x20y2z3" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y2z3.c",
  "east" : DIR+"/rooms/x21y2z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
