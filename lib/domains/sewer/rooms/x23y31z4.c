inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 31, 4 }));
  set_short( "Corridor - x23y31z4" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y32z4.c",
  "south" : DIR+"/rooms/x23y30z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
