inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 9 }));
  set_short( "Corridor - x29y12z9" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y12z9.c",
  "north" : DIR+"/rooms/x29y13z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
