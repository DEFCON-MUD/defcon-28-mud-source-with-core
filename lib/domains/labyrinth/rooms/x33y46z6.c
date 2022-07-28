inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 6 }));
  set_short( "Corridor - x33y46z6" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y46z6.c",
  "south" : DIR+"/rooms/x33y45z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
