inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 20, 0 }));
  set_short( "Passage - x43y20z0" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y20z0.c",
  "south" : DIR+"/rooms/x43y19z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
