inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 46, 6 }));
  set_short( "Passage - x22y46z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y46z6.c",
  "east" : DIR+"/rooms/x23y46z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
