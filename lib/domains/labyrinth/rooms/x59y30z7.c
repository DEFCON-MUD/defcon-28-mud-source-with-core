inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 30, 7 }));
  set_short( "Hallway - x59y30z7" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y30z7.c",
  "north" : DIR+"/rooms/x59y31z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
