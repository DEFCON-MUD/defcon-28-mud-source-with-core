inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 20, 2 }));
  set_short( "Hallway - x19y20z2" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y20z2.c",
  "east" : DIR+"/rooms/x20y20z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
