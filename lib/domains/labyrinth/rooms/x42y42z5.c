inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 42, 5 }));
  set_short( "Hallway - x42y42z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y42z5.c",
  "east" : DIR+"/rooms/x43y42z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
