inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 50, 2 }));
  set_short( "Hallway - x2y50z2" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y50z2.c",
  "east" : DIR+"/rooms/x3y50z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
