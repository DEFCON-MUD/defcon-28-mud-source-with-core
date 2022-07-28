inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 0, 4 }));
  set_short( "Corridor - x28y0z4" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y0z4.c",
  "east" : DIR+"/rooms/x29y0z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
