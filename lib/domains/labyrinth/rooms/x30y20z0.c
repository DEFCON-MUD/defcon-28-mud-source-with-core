inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 20, 0 }));
  set_short( "Hallway - x30y20z0" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y20z0.c",
  "east" : DIR+"/rooms/x31y20z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
