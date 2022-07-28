inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 50, 4 }));
  set_short( "Hallway - x53y50z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y50z4.c",
  "south" : DIR+"/rooms/x53y49z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
