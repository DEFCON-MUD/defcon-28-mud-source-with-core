inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 20, 6 }));
  set_short( "Corridor - x16y20z6" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y20z6.c",
  "east" : DIR+"/rooms/x17y20z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
