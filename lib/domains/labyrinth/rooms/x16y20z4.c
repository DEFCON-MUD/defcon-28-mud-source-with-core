inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 20, 4 }));
  set_short( "Corridor - x16y20z4" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y20z4.c",
  "east" : DIR+"/rooms/x17y20z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
