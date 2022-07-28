inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 64, 0 }));
  set_short( "Passage - x28y64z0" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y64z0.c",
  "east" : DIR+"/rooms/x29y64z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
