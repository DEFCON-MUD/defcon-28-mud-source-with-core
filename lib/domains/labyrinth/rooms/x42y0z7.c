inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 0, 7 }));
  set_short( "Passage - x42y0z7" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y0z7.c",
  "east" : DIR+"/rooms/x43y0z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
