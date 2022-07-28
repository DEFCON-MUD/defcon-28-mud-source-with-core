inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 32, 8 }));
  set_short( "Corridor - x48y32z8" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y32z8.c",
  "east" : DIR+"/rooms/x49y32z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
