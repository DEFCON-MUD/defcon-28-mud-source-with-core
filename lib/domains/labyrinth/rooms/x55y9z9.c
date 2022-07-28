inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 9, 9 }));
  set_short( "Passage - x55y9z9" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y10z9.c",
  "south" : DIR+"/rooms/x55y8z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
