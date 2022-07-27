inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 34, 7 }));
  set_short( "Hallway - x17y34z7" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y34z7.c",
  "east" : DIR+"/rooms/x18y34z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
