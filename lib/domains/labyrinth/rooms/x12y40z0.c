inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 40, 0 }));
  set_short( "Hallway - x12y40z0" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y40z0.c",
  "east" : DIR+"/rooms/x13y40z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
