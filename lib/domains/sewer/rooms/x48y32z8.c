inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 32, 8 }));
  set_short( "Hallway - x48y32z8" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y32z8.c",
  "east" : DIR+"/rooms/x49y32z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
