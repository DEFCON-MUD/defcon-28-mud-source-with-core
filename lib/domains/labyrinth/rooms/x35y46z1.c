inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 46, 1 }));
  set_short( "Corridor - x35y46z1" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y46z1.c",
  "north" : DIR+"/rooms/x35y47z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
