inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 28, 2 }));
  set_short( "Corridor - x55y28z2" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y28z2.c",
  "north" : DIR+"/rooms/x55y29z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
