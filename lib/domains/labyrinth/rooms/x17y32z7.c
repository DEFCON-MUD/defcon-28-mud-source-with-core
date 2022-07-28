inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 7 }));
  set_short( "Hallway - x17y32z7" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y32z7.c",
  "south" : DIR+"/rooms/x17y31z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
