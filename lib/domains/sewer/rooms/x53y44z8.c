inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 44, 8 }));
  set_short( "Hallway - x53y44z8" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y44z8.c",
  "east" : DIR+"/rooms/x54y44z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
