inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 32, 4 }));
  set_short( "Hallway - x34y32z4" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y32z4.c",
  "east" : DIR+"/rooms/x35y32z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
