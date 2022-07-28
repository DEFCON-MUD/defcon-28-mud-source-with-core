inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 50, 2 }));
  set_short( "Corridor - x16y50z2" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y50z2.c",
  "east" : DIR+"/rooms/x17y50z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
