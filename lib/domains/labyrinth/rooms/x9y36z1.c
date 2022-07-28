inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 36, 1 }));
  set_short( "Hallway - x9y36z1" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y36z1.c",
  "east" : DIR+"/rooms/x10y36z1.c",
  "south" : DIR+"/rooms/x9y35z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
