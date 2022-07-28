inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 46, 5 }));
  set_short( "Corridor - x53y46z5" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y47z5.c",
  "south" : DIR+"/rooms/x53y45z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
