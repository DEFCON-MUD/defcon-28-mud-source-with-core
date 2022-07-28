inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 0, 0 }));
  set_short( "Hallway - x33y0z0" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y0z0.c",
  "east" : DIR+"/rooms/x34y0z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
