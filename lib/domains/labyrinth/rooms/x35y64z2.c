inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 64, 2 }));
  set_short( "Hallway - x35y64z2" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y64z2.c",
  "east" : DIR+"/rooms/x36y64z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
