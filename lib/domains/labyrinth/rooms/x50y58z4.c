inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 58, 4 }));
  set_short( "Corridor - x50y58z4" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y58z4.c",
  "east" : DIR+"/rooms/x51y58z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
