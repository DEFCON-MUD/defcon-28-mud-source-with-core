inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 29, 4 }));
  set_short( "Corridor - x39y29z4" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y30z4.c",
  "south" : DIR+"/rooms/x39y28z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
