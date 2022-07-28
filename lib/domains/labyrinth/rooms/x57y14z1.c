inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 14, 1 }));
  set_short( "Corridor - x57y14z1" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y14z1.c",
  "east" : DIR+"/rooms/x58y14z1.c",
  "south" : DIR+"/rooms/x57y13z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
