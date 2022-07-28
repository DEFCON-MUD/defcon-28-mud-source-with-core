inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 16, 9 }));
  set_short( "Hallway - x36y16z9" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y16z9.c",
  "east" : DIR+"/rooms/x37y16z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
