inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 30, 4 }));
  set_short( "Corridor - x37y30z4" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y30z4.c",
  "south" : DIR+"/rooms/x37y29z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
