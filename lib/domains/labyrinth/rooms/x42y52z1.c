inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 52, 1 }));
  set_short( "Passage - x42y52z1" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y52z1.c",
  "east" : DIR+"/rooms/x43y52z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
