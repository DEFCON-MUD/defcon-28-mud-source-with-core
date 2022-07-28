inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 1 }));
  set_short( "Passage - x53y22z1" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y22z1.c",
  "north" : DIR+"/rooms/x53y23z1.c",
  "south" : DIR+"/rooms/x53y21z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
