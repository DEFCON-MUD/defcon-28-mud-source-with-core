inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 58, 1 }));
  set_short( "Corridor - x20y58z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y58z1.c",
  "east" : DIR+"/rooms/x21y58z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
