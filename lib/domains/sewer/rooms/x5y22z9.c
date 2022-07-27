inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 22, 9 }));
  set_short( "Hallway - x5y22z9" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y22z9.c",
  "north" : DIR+"/rooms/x5y23z9.c",
  "south" : DIR+"/rooms/x5y21z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
