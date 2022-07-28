inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 22, 9 }));
  set_short( "Hallway - x22y22z9" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y22z9.c",
  "east" : DIR+"/rooms/x23y22z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
