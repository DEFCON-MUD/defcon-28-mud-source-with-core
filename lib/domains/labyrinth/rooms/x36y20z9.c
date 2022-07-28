inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 20, 9 }));
  set_short( "Passage - x36y20z9" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y20z9.c",
  "east" : DIR+"/rooms/x37y20z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
