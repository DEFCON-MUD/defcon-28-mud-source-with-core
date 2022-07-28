inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 50, 1 }));
  set_short( "Hallway - x10y50z1" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y50z1.c",
  "east" : DIR+"/rooms/x11y50z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
