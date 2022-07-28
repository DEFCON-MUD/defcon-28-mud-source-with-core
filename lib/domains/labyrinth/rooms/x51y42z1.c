inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 42, 1 }));
  set_short( "Hallway - x51y42z1" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y42z1.c",
  "south" : DIR+"/rooms/x51y41z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
