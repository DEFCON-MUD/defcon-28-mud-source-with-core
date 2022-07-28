inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 50, 6 }));
  set_short( "Hallway - x13y50z6" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y50z6.c",
  "south" : DIR+"/rooms/x13y49z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
