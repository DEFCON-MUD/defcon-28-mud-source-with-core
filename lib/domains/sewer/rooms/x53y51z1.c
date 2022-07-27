inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 51, 1 }));
  set_short( "Hallway - x53y51z1" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y52z1.c",
  "south" : DIR+"/rooms/x53y50z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
