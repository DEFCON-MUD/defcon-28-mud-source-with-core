inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 38, 7 }));
  set_short( "Hallway - x29y38z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y39z7.c",
  "south" : DIR+"/rooms/x29y37z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
