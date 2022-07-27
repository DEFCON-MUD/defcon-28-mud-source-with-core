inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 22, 4 }));
  set_short( "Hallway - x41y22z4" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y22z4.c",
  "south" : DIR+"/rooms/x41y21z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
