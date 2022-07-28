inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 43, 1 }));
  set_short( "Hallway - x55y43z1" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y44z1.c",
  "south" : DIR+"/rooms/x55y42z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
