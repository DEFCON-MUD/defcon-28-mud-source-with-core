inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 54, 3 }));
  set_short( "Corridor - x4y54z3" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y54z3.c",
  "east" : DIR+"/rooms/x5y54z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
