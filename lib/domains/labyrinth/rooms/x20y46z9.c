inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 46, 9 }));
  set_short( "Corridor - x20y46z9" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y46z9.c",
  "east" : DIR+"/rooms/x21y46z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
