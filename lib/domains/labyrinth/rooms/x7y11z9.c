inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 11, 9 }));
  set_short( "Hallway - x7y11z9" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y12z9.c",
  "south" : DIR+"/rooms/x7y10z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
