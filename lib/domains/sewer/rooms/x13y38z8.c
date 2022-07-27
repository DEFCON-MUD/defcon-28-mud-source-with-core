inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 38, 8 }));
  set_short( "Hallway - x13y38z8" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y38z8.c",
  "north" : DIR+"/rooms/x13y39z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
