inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 0, 6 }));
  set_short( "Corridor - x4y0z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y0z6.c",
  "east" : DIR+"/rooms/x5y0z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
