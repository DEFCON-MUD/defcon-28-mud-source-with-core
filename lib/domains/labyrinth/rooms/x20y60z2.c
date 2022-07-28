inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 60, 2 }));
  set_short( "Passage - x20y60z2" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y60z2.c",
  "east" : DIR+"/rooms/x21y60z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
