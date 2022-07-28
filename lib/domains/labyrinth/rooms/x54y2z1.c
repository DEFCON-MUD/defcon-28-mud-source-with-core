inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 2, 1 }));
  set_short( "Passage - x54y2z1" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y2z1.c",
  "east" : DIR+"/rooms/x55y2z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
