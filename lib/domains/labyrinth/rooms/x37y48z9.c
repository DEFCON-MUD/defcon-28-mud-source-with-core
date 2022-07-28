inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 48, 9 }));
  set_short( "Corridor - x37y48z9" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y48z9.c",
  "north" : DIR+"/rooms/x37y49z9.c",
  "south" : DIR+"/rooms/x37y47z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
