inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 6, 0 }));
  set_short( "Hallway - x31y6z0" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y6z0.c",
  "east" : DIR+"/rooms/x32y6z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
