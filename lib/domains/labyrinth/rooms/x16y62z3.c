inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 62, 3 }));
  set_short( "Hallway - x16y62z3" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y62z3.c",
  "east" : DIR+"/rooms/x17y62z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
