inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 0 }));
  set_short( "Passage - x17y32z0" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y32z0.c",
  "north" : DIR+"/rooms/x17y33z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
