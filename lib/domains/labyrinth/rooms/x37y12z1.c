inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 12, 1 }));
  set_short( "Corridor - x37y12z1" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y12z1.c",
  "north" : DIR+"/rooms/x37y13z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
