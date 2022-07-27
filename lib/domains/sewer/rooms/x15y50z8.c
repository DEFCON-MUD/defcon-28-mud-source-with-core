inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 50, 8 }));
  set_short( "Hallway - x15y50z8" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y51z8.c",
  "south" : DIR+"/rooms/x15y49z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
