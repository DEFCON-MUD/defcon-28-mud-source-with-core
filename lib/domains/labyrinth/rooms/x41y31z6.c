inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 31, 6 }));
  set_short( "Corridor - x41y31z6" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y32z6.c",
  "south" : DIR+"/rooms/x41y30z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
