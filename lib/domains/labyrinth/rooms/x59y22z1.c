inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 22, 1 }));
  set_short( "Passage - x59y22z1" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y23z1.c",
  "south" : DIR+"/rooms/x59y21z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
