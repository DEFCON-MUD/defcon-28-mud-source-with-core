inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 2, 1 }));
  set_short( "Corridor - x17y2z1" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y2z1.c",
  "east" : DIR+"/rooms/x18y2z1.c",
  "north" : DIR+"/rooms/x17y3z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
