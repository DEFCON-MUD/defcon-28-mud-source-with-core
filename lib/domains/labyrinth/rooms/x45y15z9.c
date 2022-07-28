inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 15, 9 }));
  set_short( "Hallway - x45y15z9" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y16z9.c",
  "south" : DIR+"/rooms/x45y14z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
