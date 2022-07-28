inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 6 }));
  set_short( "Passage - x15y20z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y20z6.c",
  "east" : DIR+"/rooms/x16y20z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
