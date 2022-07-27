inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 0 }));
  set_short( "Hallway - x49y16z0" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y16z0.c",
  "north" : DIR+"/rooms/x49y17z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
