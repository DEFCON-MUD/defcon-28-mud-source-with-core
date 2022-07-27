inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 2 }));
  set_short( "Corridor - x35y62z2" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y62z2.c",
  "east" : DIR+"/rooms/x36y62z2.c",
  "south" : DIR+"/rooms/x35y61z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
