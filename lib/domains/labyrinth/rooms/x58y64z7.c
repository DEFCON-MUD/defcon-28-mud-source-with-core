inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 64, 7 }));
  set_short( "Hallway - x58y64z7" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y64z7.c",
  "east" : DIR+"/rooms/x59y64z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
