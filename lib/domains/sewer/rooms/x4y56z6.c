inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 56, 6 }));
  set_short( "Hallway - x4y56z6" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y56z6.c",
  "east" : DIR+"/rooms/x5y56z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
