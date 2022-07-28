inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 4 }));
  set_short( "Hallway - x55y56z4" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y56z4.c",
  "north" : DIR+"/rooms/x55y57z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
