inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 14, 6 }));
  set_short( "Corridor - x43y14z6" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y15z6.c",
  "south" : DIR+"/rooms/x43y13z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
