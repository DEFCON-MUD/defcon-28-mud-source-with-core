inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 33, 1 }));
  set_short( "Hallway - x43y33z1" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y34z1.c",
  "south" : DIR+"/rooms/x43y32z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
