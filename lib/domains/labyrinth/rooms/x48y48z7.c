inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 48, 7 }));
  set_short( "Corridor - x48y48z7" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y48z7.c",
  "east" : DIR+"/rooms/x49y48z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
