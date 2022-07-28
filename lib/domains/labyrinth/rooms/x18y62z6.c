inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 62, 6 }));
  set_short( "Corridor - x18y62z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y62z6.c",
  "east" : DIR+"/rooms/x19y62z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
