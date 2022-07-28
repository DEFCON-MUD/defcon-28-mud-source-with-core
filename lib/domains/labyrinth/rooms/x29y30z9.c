inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 30, 9 }));
  set_short( "Hallway - x29y30z9" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y30z9.c",
  "north" : DIR+"/rooms/x29y31z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
