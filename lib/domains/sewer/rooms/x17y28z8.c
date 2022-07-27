inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 8 }));
  set_short( "Hallway - x17y28z8" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y28z8.c",
  "north" : DIR+"/rooms/x17y29z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
