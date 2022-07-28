inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 36, 9 }));
  set_short( "Corridor - x48y36z9" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y36z9.c",
  "east" : DIR+"/rooms/x49y36z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
