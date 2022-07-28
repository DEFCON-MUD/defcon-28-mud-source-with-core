inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 36, 4 }));
  set_short( "Corridor - x5y36z4" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y36z4.c",
  "south" : DIR+"/rooms/x5y35z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
