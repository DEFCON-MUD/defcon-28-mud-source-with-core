inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 20, 0 }));
  set_short( "Hallway - x23y20z0" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y20z0.c",
  "east" : DIR+"/rooms/x24y20z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
