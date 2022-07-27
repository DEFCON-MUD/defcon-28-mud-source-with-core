inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 38, 8 }));
  set_short( "Hallway - x29y38z8" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y38z8.c",
  "north" : DIR+"/rooms/x29y39z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
