inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 22, 5 }));
  set_short( "Hallway - x56y22z5" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y22z5.c",
  "east" : DIR+"/rooms/x57y22z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
